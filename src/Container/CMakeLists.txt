add_library(ContainerLibrary STATIC container.cpp container.hpp)

target_link_libraries(ContainerLibrary PUBLIC ImageLibrary VirtualComponentLibrary)

target_include_directories(ContainerLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ../Image ../VirtualComponent)