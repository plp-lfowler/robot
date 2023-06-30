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
    hardware_interface::return_type read(const rclcpp::Time& time, const rclcpp::Duration& period);
    hardware_interface::return_type write(const rclcpp::Time& time, const rclcpp::Duration& period);

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

