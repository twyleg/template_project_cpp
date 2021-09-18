// Copyright (C) 2020 twyleg
#pragma once

class ExampleClass {

public:

	explicit ExampleClass(int exampleAttribute);

	int getExampleAttribute() const;
	void printExampleAttribute() const;

private:

	const int mExampleAttribute;
};

