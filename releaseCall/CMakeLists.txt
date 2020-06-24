cmake_minimum_required(VERSION 3.0.2)
project(releaseCall)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

catkin_package()

add_executable(r_main
    src/r_main.cpp
)

### 動的ライブラリとヘッダーのパスを追加
add_library(testLib SHARED IMPORTED)
set_target_properties(testLib
    PROPERTIES
    IMPORTED_LOCATION
    ${PROJECT_SOURCE_DIR}/libtestLib.so
)
set_target_properties(testLib
    PROPERTIES
    INTERFACE_INCLUDE_DIRECTORIES
    ${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(r_main
    testLib
)

### print debag
#message("test")

### 出力先の指定
#set(EXECUTABLE_OUTPUT_PATH /hoge)
#set(LIBRARY_OUTPUT_PATH /hoge)
