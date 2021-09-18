// Copyright (C) 2020 twyleg
#include "example_class.h"

#include <boost/optional.hpp>
#include <fmt/core.h>
#include <iostream>

ExampleClass::ExampleClass(int exampleAttribute) :
	mExampleAttribute(exampleAttribute)
{}

int ExampleClass::getExampleAttribute() const {
	return mExampleAttribute;
}

void ExampleClass::printExampleAttribute() const {
	boost::optional<int> foo;
	std::cout << fmt::format("mExampleAttribute {}", mExampleAttribute) << std::endl;
}

