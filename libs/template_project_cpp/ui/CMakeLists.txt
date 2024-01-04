# Copyright (C) 2024 twyleg
set(NAMESPACE template_project_cpp)
set(MODULE ui)


set(TARGET_NAME "${NAMESPACE}_${MODULE}")

#
# find packages
#
find_package(Qt6 COMPONENTS REQUIRED Core Widgets Multimedia Qml Quick QuickControls2)


#
# add source files to target
#
add_library(${TARGET_NAME}
    ui.cc
    ui.h
    ui.qrc
    model.h
)

add_library("${NAMESPACE}::${MODULE}" ALIAS ${TARGET_NAME})


#
# set target properties
#
set_target_properties(${TARGET_NAME}
    PROPERTIES
        CXX_STANDARD 17
        INCLUDE_CURRENT_DIR ON
        AUTOMOC ON
        AUTORCC ON
)


#
# link against libs
#
target_link_libraries(${TARGET_NAME}
    Qt::Core
    Qt::Widgets
    Qt::Multimedia
    Qt::Qml
    Qt::Quick
    Qt::QuickControls2
)


#
# add parent folder to targets include directories
#
target_include_directories(${TARGET_NAME}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../../
)
