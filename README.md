[![Build status](https://github.com/twyleg/template_project_cpp/actions/workflows/unit_tests.yaml/badge.svg)]()
[![GitHub latest commit](https://badgen.net/github/last-commit/twyleg/template_project_cpp)](https://GitHub.com/twyleg/template_project_cpp/commit/)

# template_project_cpp

Simple CMake based template for a common C++ project.

## Dependencies

The template is based on the following components:

* CMake
* boost
* googletest
* fmt

See [scripts/](https://github.com/twyleg/template_project_cpp/tree/master/scripts) for dependency install scripts for multiple distributions.

GoogleTest is pulled in as a git submodule to avoid problems with missing cmake files in sub distributions.

## Usage

Clone, prepare and build with the following steps:

	git clone git@github.com:twyleg/template_project_cpp.git
	cd template_project_cpp

	git submodule update --init
	
	mkdir build/
	cd build/
	cmake ../
	make

