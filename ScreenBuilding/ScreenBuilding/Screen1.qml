import QtQuick 2.0
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12

Rectangle {
    id: rect1
    width: 600
    height: 400
    anchors.centerIn: parent
    color: "paleturquoise"

    Rectangle{
        id:rect1_1
        anchors.centerIn: parent
        width: parent.width/2 +50
        height: parent.height/2 + 50
        color: "paleturquoise"
        Button {
            id: back
            width: 80
            height: 30
            anchors.top: rect1_1.bottom
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.topMargin: 30
            text: "Back"
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("screen1")
                    screenView.visible = false
                    rect.visible = true
                    screenView2.visible = false
                    screenView3.visible = false
                }
            }

        }

        Rectangle {
            id: rect2
            width: parent.width/2 -5
            height: parent.height - 10
            anchors.left: parent.left
            //border.color: "black"
            color: "paleturquoise"
            //   border.width: 1
            ListModel{
                id: myListmodel
                ListElement {
                    Name:  "Name";page: "ABC"
                }
                ListElement {
                    Name:  "Id";page: "ID0123"
                }
                ListElement {
                    Name:  "Customer";page: "KFC"
                }
                ListElement {
                    Name:  "Members";page: "16"
                }
                ListElement {
                    Name:  "Leader";page: "None"
                }
                ListElement {
                    Name:  "Location";page: "Hanoi"
                }
            }

            ListView {
                id: listView
                anchors.fill: parent
                model: myListmodel
                interactive: false
                spacing: 2
                delegate: Column {
                    id: myColumn
                    width: rect2.width
                    height: rect2.height/6
                    Rectangle {
                        id: rect4
                        width: parent.width
                        height:  parent.height
                        border.color: "black"
                        color: "gold"
                        border.width: 1
                        Text {
                            id: name
                            text: Name
                            anchors.centerIn: parent
                        }
                    }
                }
            }
        }
        Rectangle {
            id: rect3
            width: parent.width/2
            height: parent.height -10
            anchors.right: parent.right
            //border.color: "black"
            color: "paleturquoise"
            // border.width: 5

            ListView {
                id: listView1
                anchors.fill: parent
                model: myListmodel
                interactive: false
                spacing: 2
                delegate: Column {
                    id: myColumn1
                    width: rect2.width
                    height: rect2.height/6
                    Rectangle {
                        id: rect5
                        width: parent.width
                        height:  parent.height
                        border.color: "black"
                        color: "gold"
                        border.width: 1
                        Text {
                            id: name1
                            text: page
                            anchors.centerIn: parent
                        }
                    }
                }
            }
        }
    }

}

