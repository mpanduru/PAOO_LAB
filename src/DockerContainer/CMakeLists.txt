add_library(DockerContainerLibrary STATIC dockercontainer.cpp dockercontainer.hpp)

target_link_libraries(DockerContainerLibrary PUBLIC ContainerLibrary)

target_include_directories(DockerContainerLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ../Container)