cmake_minimum_required(VERSION 3.10)

project(Tema1 VERSION 1.0)

add_subdirectory(./src/Image)
add_subdirectory(./src/Container)

add_executable(Tema1 src/main.cpp)

target_link_libraries(Tema1 ContainerLibrary)