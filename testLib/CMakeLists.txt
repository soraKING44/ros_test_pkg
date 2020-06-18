cmake_minimum_required(VERSION 3.0.2)
project(testLib)

find_package(
    catkin REQUIRED COMPONENTS
    roscpp
    rospy
    std_msgs
)

catkin_package(
    INCLUDE_DIRS include
    LIBRARIES testLib
)

### ライブラリに追加
add_library(testLib
    SHARED
    src/print.cpp
)

### ヘッダーファイルの読み込み
target_include_directories(testLib
    PUBLIC include
)

target_link_libraries(testLib
    ${catkin_LIBRARIES}
)