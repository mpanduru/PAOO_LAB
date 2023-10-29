add_library(ContainerLibrary STATIC container.cpp container.hpp)

target_link_libraries(ContainerLibrary PUBLIC ImageLibrary)

target_include_directories(ContainerLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ../Image)