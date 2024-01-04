// Copyright (C) 2024 twyleg
#include "example_class.h"

#include <fmt/core.h>

#include <optional>

namespace template_project_cpp::core {

ExampleClass::ExampleClass(int exampleAttribute) :
	mExampleAttribute(exampleAttribute)
{}

int ExampleClass::getExampleAttribute() const {
	return mExampleAttribute;
}

void ExampleClass::printExampleAttribute() const {
    std::optional<int> foo;
	fmt::print("mExampleAttribute {}", mExampleAttribute);
}

}
