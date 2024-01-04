// Copyright (C) 2024 twyleg
#pragma once

#include <QObject>
#include <QtMultimedia/QMediaPlayer>
#include <QStringListModel>

namespace template_project_cpp::ui {

#define ADD_PROPERTY(datatype, name, funcName, initial_value) \
private: \
    datatype name = initial_value; \
    Q_PROPERTY(datatype name READ get##funcName WRITE set##funcName NOTIFY  name##Changed) \
public: \
    datatype& get##funcName() { return name; } \
    void set##funcName(const datatype& value) \
    { \
        if (name != value) {\
            name = value; \
            emit name##Changed(); \
        }\
    } \
Q_SIGNALS: \
    void name##Changed(); \
private: \

class Model : public QObject
{
    Q_OBJECT

    ADD_PROPERTY(QString, time, Time, QString(""));


Q_SIGNALS:

    // Frontend -> Backend
    void requestPlaySound();

};

}
