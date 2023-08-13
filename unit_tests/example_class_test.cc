// Copyright (C) 2023 twyleg
#include <gtest/gtest.h>

#include <example_lib/example_class.h>

namespace CppProjectExample::Testing {

class ExampleClassTest : public ::testing::Test {

public:

	ExampleClassTest() :
		mExampleClass(42)
	{}

	void SetUp() override {
		// Do stuff
	}

protected:

	cpp_project_templace::example_lib::ExampleClass mExampleClass;

};

TEST_F(ExampleClassTest, InitialState_Action_Expectation)
{
	EXPECT_EQ(mExampleClass.getExampleAttribute(), 42);
}

}

