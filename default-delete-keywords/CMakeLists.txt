# CMakeList.txt : CMake project for default-delete-keywords, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (default-delete-keywords "default-delete-keywords.cpp" "default-delete-keywords.hpp")
set_property(TARGET default-delete-keywords PROPERTY CXX_STANDARD 11)

# TODO: Add tests and install targets if needed.
