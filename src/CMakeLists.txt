cmake_minimum_required(VERSION 3.10)

project(Tema1 VERSION 1.0)

add_subdirectory(./Image)
add_subdirectory(./Container)

add_executable(Tema1 main.cpp)

target_link_libraries(Tema1 ContainerLibrary)