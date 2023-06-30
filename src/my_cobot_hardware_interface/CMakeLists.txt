cmake_minimum_required(VERSION 3.5)
project(my_cobot_hardware_interface)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(hardware_interface REQUIRED)
find_package(pluginlib REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_lifecycle REQUIRED)
find_package(my_cobot_interfaces REQUIRED)

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)

# Include directories
include_directories(include)

# Create the shared library
add_library(${PROJECT_NAME} SHARED
  src/MyCobotHardwareInterface.cpp
)

# Link against dependencies
ament_target_dependencies(${PROJECT_NAME}
  hardware_interface
  pluginlib
  rclcpp
  rclcpp_lifecycle
  my_cobot_interfaces
)

# Export the plugin as a class
pluginlib_export_plugin_description_file(my_cobot_hardware_interface ${PROJECT_NAME}.xml)

# Install
install(
  DIRECTORY include/
  DESTINATION include
)

install(
  TARGETS ${PROJECT_NAME}
  EXPORT ${PROJECT_NAME}
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  RUNTIME DESTINATION bin
)

# Add the library to ament_export_libraries (optional)
ament_export_libraries(${PROJECT_NAME})

ament_package()

