cmake_minimum_required(VERSION 3.0.2)
project(testCall)

find_package(
    catkin REQUIRED COMPONENTS
    roscpp
    rospy
    std_msgs
    testLib
)

catkin_package()

add_executable(main
    src/main.cpp)

target_link_libraries(main
    ${catkin_LIBRARIES}
)
