#ifndef MY_COBOT_HARDWARE_INTERFACE_HPP_
#define MY_COBOT_HARDWARE_INTERFACE_HPP_

#include <vector>
#include <string>
#include <hardware_interface/actuator_interface.hpp>
#include <rclcpp/rclcpp.hpp>
#include <my_cobot_interfaces/srv/get_radians.hpp>
#include <my_cobot_interfaces/srv/set_radians.hpp>

namespace my_cobot_hardware_interface
{
  class MyCobotHardwareInterface : public hardware_interface::ActuatorInterface
  {
  public:
    MyCobotHardwareInterface();
    std::vector<hardware_interface::StateInterface> export_state_interfaces();
    std::vector<hardware_interface::CommandInterface> export_command_interfaces();
    hardware_interface::return_type read(const rclcpp::Time& time, const rclcpp::Duration& period) override;
    hardware_interface::return_type write(const rclcpp::Time& time, const rclcpp::Duration& period) override;

  private:
    std::vector<std::string> joint_names_;
    std::vector<double> joint_state_variable_;
    std::vector<double> joint_command_variable_;
    rclcpp::Node::SharedPtr node_;
    rclcpp::Client<my_cobot_interfaces::srv::GetRadians>::SharedPtr get_radians_client_;
    rclcpp::Client<my_cobot_interfaces::srv::SetRadians>::SharedPtr set_radians_client_;
  };

}  // namespace my_cobot_hardware_interface

#endif  // MY_COBOT_HARDWARE_INTERFACE_HPP_

#include "my_cobot_hardware_interface/MyCobotHardwareInterface.hpp"
#include "pluginlib/class_list_macros.hpp"

namespace my_cobot_hardware_interface
{
  MyCobotHardwareInterface::MyCobotHardwareInterface()
    : joint_names_({"joint2_to_joint1", "joint3_to_joint2", "joint4_to_joint3", "joint5_to_joint4",
                    "joint6_to_joint5", "joint6output_to_joint6"})
  {
    joint_state_variable_.resize(joint_names_.size(), 0.0);
    joint_command_variable_.resize(joint_names_.size(), 0.0);
    node_ = rclcpp::Node::make_shared("my_cobot_hardware_interface");
    get_radians_client_ = node_->create_client<my_cobot_interfaces::srv::GetRadians>("my_cobot/get_radians");
    set_radians_client_ = node_->create_client<my_cobot_interfaces::srv::SetRadians>("my_cobot/set_radians");
  }

  std::vector<hardware_interface::StateInterface> MyCobotHardwareInterface::export_state_interfaces()
  {
    std::vector<hardware_interface::StateInterface> state_interfaces;
    for (size_t i = 0; i < joint_names_.size(); ++i)
    {
      state_interfaces.emplace_back(hardware_interface::StateInterface(joint_names_[i], "position",
                                                                       &joint_state_variable_[i]));
    }
    return state_interfaces;
  }

  std::vector<hardware_interface::CommandInterface> MyCobotHardwareInterface::export_command_interfaces()
  {
    std::vector<hardware_interface::CommandInterface> command_interfaces;
    for (size_t i = 0; i < joint_names_.size(); ++i)
    {
      command_interfaces.emplace_back(hardware_interface::CommandInterface(joint_names_[i], "position",
                                                                           &joint_command_variable_[i]));
    }
    return command_interfaces;
  }

  hardware_interface::return_type MyCobotHardwareInterface::read(const rclcpp::Time& time,
                                                                 const rclcpp::Duration& period)
  {
    auto request = std::make_shared<my_cobot_interfaces::srv::GetRadians::Request>();
    auto future = get_radians_client_->async_send_request(request);
    rclcpp::spin_until_future_complete(node_, future);

    if (future.wait_for(std::chrono::seconds(1)) != std::future_status::ready)
    {
      RCLCPP_ERROR(node_->get_logger(), "Failed to call service get_radians");
      return hardware_interface::return_type::ERROR;
    }

    auto response = future.get();
    if (response->angles.size() == joint_names_.size())
    {
      for (size_t i = 0; i < joint_names_.size(); ++i)
      {
        joint_state_variable_[i] = response->angles[i];
      }
      return hardware_interface::return_type::OK;
    }
    else
    {
      RCLCPP_ERROR(node_->get_logger(), "Received incorrect number of joint angles");
      return hardware_interface::return_type::ERROR;
    }
  }

  hardware_interface::return_type MyCobotHardwareInterface::write(const rclcpp::Time& time,
                                                                  const rclcpp::Duration& period)
  {
    auto request = std::make_shared<my_cobot_interfaces::srv::SetRadians::Request>();
    request->joint_names = joint_names_;
    request->angles.resize(joint_command_variable_.size());
    for (size_t i = 0; i < joint_command_variable_.size(); ++i)
    {
      request->angles[i] = joint_command_variable_[i];
    }

    auto future = set_radians_client_->async_send_request(request);
    rclcpp::spin_until_future_complete(node_, future);

    if (future.wait_for(std::chrono::seconds(1)) != std::future_status::ready)
    {
      RCLCPP_ERROR(node_->get_logger(), "Failed to call service set_radians");
      return hardware_interface::return_type::ERROR;
    }

    return hardware_interface::return_type::OK;
  }


}  // namespace my_cobot_hardware_interface

PLUGINLIB_EXPORT_CLASS(my_cobot_hardware_interface::MyCobotHardwareInterface, hardware_interface::ActuatorInterface)

