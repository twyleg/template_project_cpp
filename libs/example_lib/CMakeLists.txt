set(TARGET_NAME example_lib)

#
# set cmake settings
#
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

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
	PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/..
)
