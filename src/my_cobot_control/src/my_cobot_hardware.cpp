#include "my_cobot_hardware/my_cobot_hardware.hpp"
#include <controller_interface/controller_interface.hpp>
#include <hardware_interface/types/hardware_interface_type_values.hpp>
#include <my_cobot_interfaces/srv/get_radians.hpp>
#include <my_cobot_interfaces/srv/set_radians.hpp>
#include <rclcpp/rclcpp.hpp>

namespace my_cobot_hardware
{
    MyCobotHardware::MyCobotHardware()
        : position_{0.0}, velocity_{0.0}, effort_{0.0}
    {
        // Initialize your hardware interface variables here
    }

    bool MyCobotHardware::init()
    {
        // Initialize your hardware interface here

        // Connect to the ROS node
        node_ = std::make_shared<rclcpp::Node>("my_cobot_hardware");

        // Create client to the GetRadians and SetRadians services
        get_radians_client_ = node_->create_client<my_cobot_interfaces::srv::GetRadians>("/mycobot/GetRadians");
        set_radians_client_ = node_->create_client<my_cobot_interfaces::srv::SetRadians>("/mycobot/SetRadians");

        // Wait for the services to become available
        if (!get_radians_client_->wait_for_service(std::chrono::seconds(5)) ||
            !set_radians_client_->wait_for_service(std::chrono::seconds(5))) {
            RCLCPP_ERROR(node_->get_logger(), "Failed to connect to the GetRadians or SetRadians service");
            return false;
        }

        // Register the joint state interface
        hardware_interface::JointStateHandle joint_state_handle("my_joint", &position_, &velocity_, &effort_);
        joint_state_interface_.registerHandle(joint_state_handle);
        registerInterface(&joint_state_interface_);

        // Register the joint position command interface
        hardware_interface::JointHandle joint_handle_position(joint_state_handle, &position_command_);
        position_joint_interface_.registerHandle(joint_handle_position);
        registerInterface(&position_joint_interface_);

        return true;
    }

    void MyCobotHardware::read()
    {
        // Read the current state from your hardware and update the variables

        // Call the GetRadians service to get the current joint positions
        auto request = std::make_shared<my_cobot_interfaces::srv::GetRadians::Request>();
        auto future = get_radians_client_->async_send_request(request);

        if (rclcpp::spin_until_future_complete(node_, future) != rclcpp::executor::FutureReturnCode::SUCCESS) {
            RCLCPP_ERROR(node_->get_logger(), "Failed to call GetRadians service");
            return;
        }

        auto response = future.get();
        // Update joint positions
        if (response->positions.size() == 6) {
            for (int i = 0; i < 6; ++i) {
                position_[i] = response->positions[i];
            }
        } else {
            RCLCPP_ERROR(node_->get_logger(), "Invalid response from GetRadians service");
        }
    }

    void MyCobotHardware::write()
    {
        // Write the desired commands to your hardware

        // Send the joint position command to the SetRadians service
        auto request = std::make_shared<my_cobot_interfaces::srv::SetRadians::Request>();
        for (int i = 0; i < 6; ++i) {
            request->positions.push_back(position_command_.position[i]);  // Use the desired position commands
        }

        auto future = set_radians_client_->async_send_request(request);

        if (rclcpp::spin_until_future_complete(node_, future) != rclcpp::executor::FutureReturnCode::SUCCESS) {
            RCLCPP_ERROR(node_->get_logger(), "Failed to call SetRadians service");
            return;
        }

        auto response = future.get();
        // Update your hardware state variables based on the received response

        // Example: Update your hardware state variables based on the received response
        // ...
    }


} // namespace my_cobot_hardware

#include <pluginlib/class_list_macros.hpp>
PLUGINLIB_EXPORT_CLASS(my_cobot_hardware::MyCobotHardware, controller_interface::ControllerInterface)
