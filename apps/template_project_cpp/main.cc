// Copyright (C) 2024 twyleg
#include <template_project_cpp/ui/ui.h>
#include <template_project_cpp/core/example_class.h>

int main(int argc, char *argv[]) {

    Q_INIT_RESOURCE(ui);

    template_project_cpp::core::ExampleClass exampleClass(42);
    exampleClass.printExampleAttribute();

    template_project_cpp::ui::UI ui(argc, argv);
    return ui.run();
}
