# CMakeList.txt : CMake project for string-view, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable(string-view "string-view.cpp" "string-view.h")
set_property(TARGET string-view PROPERTY CXX_STANDARD 17)

# TODO: Add tests and install targets if needed.
