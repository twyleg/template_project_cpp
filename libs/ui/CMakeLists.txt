# Copyright (C) 2023 twyleg
set(TARGET_NAME ui)


#
# find packages
#
find_package(fmt REQUIRED)
find_package(Boost COMPONENTS REQUIRED system)
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
    fmt::fmt
    Boost::system
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
	PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/..
)
