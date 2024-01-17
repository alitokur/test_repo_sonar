cmake_minimum_required(VERSION 3.10)
project(YourProjectName)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add your source files
add_executable(YourProjectName main.cpp)

# Check if the coverage option is enabled
option(CODE_COVERAGE "Enable coverage reporting" OFF)

# Add flags for coverage if it's enabled
if (CODE_COVERAGE)
    target_compile_options(YourProjectName PRIVATE --coverage)
    target_link_options(YourProjectName PRIVATE --coverage)
endif()

