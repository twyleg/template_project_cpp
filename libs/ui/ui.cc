// Copyright (C) 2023 twyleg
#include "ui.h"

#include <QQmlContext>

#include <boost/optional.hpp>
#include <fmt/core.h>

#include <iostream>

namespace cpp_project_template::ui {

UI::UI(int argc, char **argv) :
    mArgc(argc),
    mArgv(argv),
    mApplication(mArgc, mArgv)
{

    mMediaPlayer.setAudioOutput(&mAudioOutput);
    mAudioOutput.setVolume(0.3);
    mMediaPlayer.setSource(QUrl("qrc:/resources/ogg/sydney_airport_final_call.ogg"));

    QObject::connect(&mModel, &Model::requestPlaySound, [this]() {
        mMediaPlayer.setPosition(0);
        mMediaPlayer.play();
    });

}

UI::~UI() {

}

int UI::run() {

    mEngine.rootContext()->setContextProperty("model", &mModel);

    mEngine.load(":/qml/main_window.qml");

    return mApplication.exec();
}

}
