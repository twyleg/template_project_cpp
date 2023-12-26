// Copyright (C) 2023 twyleg
#pragma once

#include <QApplication>
#include <QObject>
#include <QQmlApplicationEngine>

namespace cpp_project_template::ui {

//class UI: public QObject {

//Q_OBJECT

//public:

//    UI(int argc, char** argv);

//    virtual ~UI();


//    void run();


//private:

//    int mArgc;
//    char **mArgv;

//    QApplication mApplication;
//    QQmlApplicationEngine mEngine;
//};

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

};


}
