import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello Cuong")

    Screen1{
        id: screenView
        anchors.fill: parent
        visible: false
    }
    Screen2{
        id: screenView2
        anchors.fill: parent
        visible: false
    }
    Screen3{
        id: screenView3
        anchors.fill: parent
        visible: false
    }
    Rectangle {
        id: rect
        width: 600
        height: 400
        anchors.centerIn: parent
        color: "gray"
        Button {
            id: back
            width: 80
            height: 30
            anchors.bottom: rect.bottom
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.bottomMargin: 30
            text: "Back"
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("main")
                    root.visible = true
                    root.isSignedIn = false
                    myscreen.visible = false

                }
            }

        }
        RowLayout {
            anchors.fill: parent
            spacing: 20

            // lets have some left and right margins
            anchors.leftMargin: 20
            anchors.rightMargin: 20
            anchors.topMargin: 50
            anchors.bottomMargin: 200
            //anchors.centerIn: parent

            Button{
                id: returnToPlaylistID
                Layout.preferredWidth: width
                height: parent.height
                width: parent.width/3
                padding: 0
                background: Rectangle{
                    width: 150
                    height: 150
                    color: "gold"
                    Text {
                        id: btn_1
                        text: qsTr("Project Information")
                        anchors.centerIn: parent
                    }
                    MouseArea {
                        anchors.fill: parent
                        onClicked: {
                            console.log("screen1")
                            screenView.visible = true
                            rect.visible = false
                            //                            screenView2.visible = false
                            //                            screenView3.visible = false
                        }
                    }
                }
            }
            Button{
                id: playButton
                padding: 0
                Layout.preferredWidth: width
                height: parent.height
                width: parent.width/3
                background: Rectangle{

                    width: 150
                    height: 150
                    color: "mediumturquoise"
                    Text {
                        id: btn_2
                        text: qsTr("Member Information")
                        anchors.centerIn: parent
                    }
                    MouseArea {
                        anchors.fill: parent
                        onClicked: {
                            console.log("screen2")
                            screenView2.visible = true
                            rect.visible = false
                            screenView.visible = false
                            screenView3.visible = false
                        }
                    }
                }
            }
            Button{
                id: stopButton
                padding: 0
                Layout.preferredWidth: width
                height: parent.height
                width: parent.width/3
                background: Rectangle{
                    width: 150
                    height: 150
                    color: "green"
                    Text {
                        id: btn_3
                        text: qsTr("Edit Information")
                        anchors.centerIn: parent
                    }
                    MouseArea {
                        anchors.fill: parent
                        onClicked: {
                            console.log("screen3")
                            screenView3.visible = true
                            rect.visible = false
                            screenView2.visible = false
                            screenView.visible = false
                        }
                    }
                }
            }
        }
    }
}
