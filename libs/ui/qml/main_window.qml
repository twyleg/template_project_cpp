// Copyright (C) 2023 twyleg
import QtQuick 2.0
import QtQuick.Controls 2.0

ApplicationWindow
{
    id: app

    visible: true
    width: 800
    height: 480
    title: qsTr("Minimal Qml")

    Rectangle {

        id: containingRectangle

        anchors.centerIn: parent

        width: 800
        height: 480

        color: "transparent"
        border.color: "black"
        border.width: 1

        Image {

            id: slidingImage

            height: parent.height * 0.5
            anchors.top: parent.top

            source: "qrc:/resources/svg/made_with_linux_gray.svg"

            sourceSize.width: width
            fillMode: Image.PreserveAspectFit

            PropertyAnimation {
                id: slidingImageAnimation;
                target: slidingImage
                property: "x";
                from: 0
                to: containingRectangle.width - slidingImage.width
                duration: 2000
                running: true
                easing.type: Easing.OutInQuad

                onStopped: {
                    var bak = slidingImageAnimation.to
                    slidingImageAnimation.to = slidingImageAnimation.from
                    slidingImageAnimation.from = bak
                    slidingImageAnimation.start()
                }
            }
        }

        Image {

            id: rotatingImage

            height: parent.height * 0.5
            anchors.bottom: parent.bottom
            anchors.horizontalCenter: parent.horizontalCenter

            source: "qrc:/resources/svg/made_with_linux_gray.svg"

            sourceSize.width: width
            fillMode: Image.PreserveAspectFit

            PropertyAnimation {
                id: rotatingImageAnimation;
                target: rotatingImage
                property: "rotation"
                from: 0
                to: 360
                duration: 2000
                loops: Animation.Infinite
                running: true
            }
        }
    }
}

