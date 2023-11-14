cmake_minimum_required(VERSION 3.10)

add_subdirectory(./src/Image)
add_subdirectory(./src/Container)
add_subdirectory(./src/VirtualComponent)
add_subdirectory(./src/VirtualMachine)
add_subdirectory(./src/DockerContainer)
add_subdirectory(./src/System)

add_executable(Tema1 src/main.cpp)

target_link_libraries(Tema1 ContainerLibrary VirtualMachineLibrary DockerContainerLibrary SystemLibrary)