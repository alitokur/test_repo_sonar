cmake_minimum_required(VERSION 3.10)
project(PrimeChecker)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Enable testing
enable_testing()

# Add the Google Test submodule
add_subdirectory(GoogleTest)  # Assuming Google Test is in a GoogleTest directory

# Add your source files
add_executable(PrimeChecker main.cpp)

# Include Google Test libraries
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Add test executable
add_executable(runUnitTests test.cpp)

# Link test executable against gtest & gtest_main
target_link_libraries(runUnitTests gtest gtest_main)

# Add the tests to be run
add_test(NAME PrimeCheckerTest COMMAND runUnitTests)

# Check if the coverage option is enabled
option(CODE_COVERAGE "Enable coverage reporting" OFF)

# Add flags for coverage if it's enabled
if (CODE_COVERAGE)
    target_compile_options(PrimeChecker PRIVATE --coverage)
    target_link_options(PrimeChecker PRIVATE --coverage)
    target_compile_options(runUnitTests PRIVATE --coverage)
    target_link_options(runUnitTests PRIVATE --coverage)
endif()

