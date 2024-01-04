// Copyright (C) 2023 twyleg
import QtQuick 2.0
import QtQuick.Controls 2.0
import QtQuick.Layouts

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

        RowLayout {

            anchors.top: parent.verticalCenter
            anchors.bottom: parent.bottom
            anchors.left: parent.left
            anchors.right: parent.right

            spacing: 2

            Button {
                id: soundButton

                text: "Press for sound!"

                Layout.fillWidth: true
                Layout.fillHeight: true

                // Layout.horizontalStretchFactor: 1
                Layout.alignment: Qt.AlignHCenter

                Layout.margins: 20

                onPressed: {
                    model.requestPlaySound();
                }

            }

            Image {

                id: rotatingImage

                height: parent.height

                source: "qrc:/resources/svg/made_with_linux_gray.svg"

                sourceSize.width: width
                fillMode: Image.PreserveAspectFit

                // Layout.horizontalStretchFactor: 1
                Layout.alignment: Qt.AlignHCenter

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

            Label {
                id: label

                text: "Foo"

                // Layout.horizontalStretchFactor: 1
                Layout.alignment: Qt.AlignHCenter

                Layout.fillWidth: true
                Layout.fillHeight: true

                Layout.margins: 20

            }

        }
    }
}

