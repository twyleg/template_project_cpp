# Copyright (C) 2024 twyleg
cmake_minimum_required(VERSION 3.16.3)


project(template_project_cpp)

# Externals
add_subdirectory(external/googletest/)

# Libs
add_subdirectory(libs/template_project_cpp/core/)

# Apps
add_subdirectory(apps/template_project_cpp)

# Unit-Test
add_subdirectory(unit_tests/)
