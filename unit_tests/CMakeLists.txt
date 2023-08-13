# Copyright (C) 2023 twyleg
set(TARGET_NAME unit_tests)


#
# add source files to target
#
add_executable(${TARGET_NAME}
	main.cc
	example_class_test.cc
)


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
	example_lib
	GTest::gmock
	GTest::gtest
	GTest::gmock_main
	GTest::gtest_main
)
