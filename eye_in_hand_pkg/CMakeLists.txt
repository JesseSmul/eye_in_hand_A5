cmake_minimum_required(VERSION 3.8)
project(eye_in_hand_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_srvs REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

install(PROGRAMS
  src/eye_in_hand_pkg/hmi_main.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME hmi_main
)

install(DIRECTORY
  src/eye_in_hand_pkg/
  DESTINATION lib/python3.12/site-packages/eye_in_hand_pkg
  FILES_MATCHING
  PATTERN "*.py"
)

install(FILES
  src/eye_in_hand_pkg/hmi_window.ui
  DESTINATION lib/${PROJECT_NAME}
)

install(FILES
  src/eye_in_hand_pkg/avans.png
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()