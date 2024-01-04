# Copyright (C) 2024 twyleg
set(NAMESPACE template_project_cpp)
set(MODULE core)


set(TARGET_NAME "${NAMESPACE}_${MODULE}")

#
# find packages
#
find_package(fmt REQUIRED)
find_package(Boost COMPONENTS REQUIRED system)


#
# add source files to target
#
add_library(${TARGET_NAME}
    example_class.cc
    example_class.h
)

add_library("${NAMESPACE}::${MODULE}" ALIAS ${TARGET_NAME})


#
# set target properties
#
set_target_properties(${TARGET_NAME}
    PROPERTIES
        CXX_STANDARD 17
        INCLUDE_CURRENT_DIR ON
)


#
# link against libs
#
target_link_libraries(${TARGET_NAME}
    fmt::fmt
    Boost::system
)


#
# add parent folder to targets include directories
#
target_include_directories(${TARGET_NAME}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../../
)
