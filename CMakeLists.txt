cmake_minimum_required (VERSION 3.0.2)

project(example)
set(PROJECT_LONGNAME "Example SHAD algo problem")

# Global CMake options
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
set(CMAKE_CXX_STANDARD 11)
enable_testing()

# Set custom variables
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY
    ${PROJECT_BINARY_DIR}/bin
    CACHE PATH
    "Bianry path")
set(CONTEST_DIR ${CMAKE_SOURCE_DIR}/contest)

# Sources
add_subdirectory(source)
add_subdirectory(tests)
