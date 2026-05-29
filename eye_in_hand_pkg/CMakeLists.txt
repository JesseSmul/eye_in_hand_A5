cmake_minimum_required(VERSION 3.8)
project(eye_in_hand_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

install(PROGRAMS
  src/eye_in_hand_pkg/hmi_status.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME hmi_status
)

install(FILES
  src/eye_in_hand_pkg/hmi_window.ui
  DESTINATION lib/${PROJECT_NAME}
)

install(FILES
  src/eye_in_hand_pkg/avans.png
  DESTINATION lib/${PROJECT_NAME}
)
install(PROGRAMS
  src/eye_in_hand_pkg/hmi_status.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME hmi_status
)

install(PROGRAMS
  src/eye_in_hand_pkg/hmi_camera.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME hmi_camera
)

install(PROGRAMS
  src/eye_in_hand_pkg/hmi_bediening.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME hmi_bediening
)

install(PROGRAMS
  src/eye_in_hand_pkg/hmi_product.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME hmi_product
)

install(PROGRAMS
  src/eye_in_hand_pkg/hmi_calibratie.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME hmi_calibratie
)

ament_package()
