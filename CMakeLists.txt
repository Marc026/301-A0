cmake_minimum_required(VERSION 3.17)
project(Assignment0_box_template)

set(CMAKE_CXX_STANDARD 14)

# This is a very basic driver that can be used to see if the Box class works.
add_executable(Basic_Box_Driver Box_Driver.cpp Box.cpp)

# Catch Tests
add_executable(Constructor_Tests unit_tests/catch.hpp unit_tests/constructor_tests.cpp Box.cpp)
add_executable(Volume_Area_Tests unit_tests/catch.hpp unit_tests/volume_area_tests.cpp Box.cpp)
add_executable(Getters_Setters_Tests unit_tests/catch.hpp unit_tests/getters_setters_tests.cpp Box.cpp)

