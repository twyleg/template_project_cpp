// Copyright (C) 2023 twyleg
#include "example_class.h"

#include <boost/optional.hpp>
#include <fmt/core.h>

namespace cpp_project_templace::example_lib {

ExampleClass::ExampleClass(int exampleAttribute) :
	mExampleAttribute(exampleAttribute)
{}

int ExampleClass::getExampleAttribute() const {
	return mExampleAttribute;
}

void ExampleClass::printExampleAttribute() const {
	boost::optional<int> foo;
	fmt::print("mExampleAttribute {}", mExampleAttribute);
}

}
