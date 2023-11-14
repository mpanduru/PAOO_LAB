add_library(SystemLibrary STATIC system.cpp system.hpp)

target_link_libraries(SystemLibrary PUBLIC VirtualComponentLibrary)

target_include_directories(SystemLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ../VirtualComponent)