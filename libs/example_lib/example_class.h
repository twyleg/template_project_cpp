// Copyright (C) 2023 twyleg
#pragma once

namespace cpp_project_templace::example_lib {

class ExampleClass {

public:

	explicit ExampleClass(int exampleAttribute);

	int getExampleAttribute() const;
	void printExampleAttribute() const;

private:

	const int mExampleAttribute;
};

}
