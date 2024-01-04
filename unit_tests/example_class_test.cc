// Copyright (C) 2023 twyleg
#include <gtest/gtest.h>

#include <template_project_cpp/core/example_class.h>

namespace template_project_cpp::Testing {

class ExampleClassTest : public ::testing::Test {

public:

	ExampleClassTest() :
		mExampleClass(42)
	{}

	void SetUp() override {
		// Do stuff
	}

protected:

	template_project_cpp::core::ExampleClass mExampleClass;

};

TEST_F(ExampleClassTest, InitialState_Action_Expectation)
{
	EXPECT_EQ(mExampleClass.getExampleAttribute(), 42);
}

}

