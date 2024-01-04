// Copyright (C) 2024 twyleg
#pragma once

#include "model.h"

#include <QApplication>
#include <QObject>
#include <QQmlApplicationEngine>
#include <QMediaPlayer>
#include <QAudioOutput>

namespace template_project_cpp::ui {

class UI: public QObject  {

Q_OBJECT

public:

    UI(int argc, char** argv);

    virtual ~UI();


    int run();


private:

    int mArgc;
    char **mArgv;

    QApplication mApplication;
    QQmlApplicationEngine mEngine;

    QAudioOutput mAudioOutput;
    QMediaPlayer mMediaPlayer;

    Model mModel;

};


}
