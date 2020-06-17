cmake_minimum_required(VERSION 3.0.2)
project(lib)

find_package(
    catkin REQUIRED COMPONENTS
    roscpp
    rospy
    std_msgs
)

catkin_package()

add_library(print
    SHARED
    src/print.cpp
)

target_include_directories(print
    PUBLIC include
)