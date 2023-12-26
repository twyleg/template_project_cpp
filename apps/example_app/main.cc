// Copyright (C) 2023 twyleg
#include <ui/ui.h>

int main(int argc, char *argv[]) {

    Q_INIT_RESOURCE(ui);

    cpp_project_template::ui::UI ui(argc, argv);
    return ui.run();
}
