// Copyright (C) 2024 twyleg
#pragma once

namespace template_project_cpp::core {

class ExampleClass {

public:

	explicit ExampleClass(int exampleAttribute);

	int getExampleAttribute() const;
	void printExampleAttribute() const;

private:

	const int mExampleAttribute;
};

}
