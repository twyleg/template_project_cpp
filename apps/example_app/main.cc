// Copyright (C) 2023 twyleg
#include <example_lib/example_class.h>

#include <iostream>
#include <vector>


int main(int argc, char *argv[]) {
	const cpp_project_templace::example_lib::ExampleClass exampleClass(42);

	exampleClass.printExampleAttribute();

	return 0;
}
