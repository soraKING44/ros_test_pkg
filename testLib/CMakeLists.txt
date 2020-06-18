cmake_minimum_required(VERSION 3.0.2)
project(testLib)

find_package(
    catkin REQUIRED COMPONENTS
    roscpp
    rospy
    std_msgs
)

catkin_package()

add_library(testLib
    SHARED
    src/print.cpp
)

target_include_directories(testLib
    PUBLIC include
)

target_link_libraries(testLib
    ${catkin_LIBRARIES}
)