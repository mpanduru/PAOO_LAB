add_library(VirtualMachineLibrary STATIC virtualmachine.cpp virtualmachine.hpp)

target_link_libraries(VirtualMachineLibrary PUBLIC VirtualComponentLibrary)

target_include_directories(VirtualMachineLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ../VirtualComponent)