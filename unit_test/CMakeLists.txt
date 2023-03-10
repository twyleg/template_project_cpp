set(TARGET_NAME test_example)

#
# set cmake settings
#
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(${TARGET_NAME}
	main.cc
	example_class_test.cc
)

target_link_libraries(${TARGET_NAME}
	example_lib
	GTest::gmock
	GTest::gtest
	GTest::gmock_main
	GTest::gtest_main
)
