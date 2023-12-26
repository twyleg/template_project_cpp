// Copyright (C) 2023 twyleg
#include "ui.h"

#include <boost/optional.hpp>
#include <fmt/core.h>

namespace cpp_project_template::ui {

UI::UI(int argc, char **argv) :
    mArgc(argc),
    mArgv(argv),
    mApplication(mArgc, mArgv)
{
}

UI::~UI() {

}

int UI::run() {
    mEngine.load(":/qml/main_window.qml");

    return mApplication.exec();
}

}
