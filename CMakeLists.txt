cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 20)

project(GameEngine VERSION 1.0)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(Hazel)
add_subdirectory(Sandbox)
