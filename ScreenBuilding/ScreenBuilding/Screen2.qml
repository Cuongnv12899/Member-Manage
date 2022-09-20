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
    property string headername: ""
    Rectangle{
        id:rect1_1
        anchors.centerIn: parent
        width: parent.width/2 +50
        height: parent.height/2 + 50
        color: "paleturquoise"
        //border.color: "black"
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

        ////left1
        Rectangle {
            id: rect2
            width: parent.width/2- 5
            height: parent.height
            anchors.left: parent.left
            //border.color: "black"
            color: "white"
            Rectangle {
                id: rect2_1
                width: 40
                height: parent.height - 10
                anchors.left: layout.right
                //border.color: "black"
                color: "paleturquoise"
                anchors.leftMargin: 5

                ListModel{
                    id: myListmodel
                    ListElement {Name1:  "ACC1"; page: "1"}
                    ListElement {Name1:  "ACC2"; page: "2"}
                    ListElement {Name1:  "ACC3"; page: "3"}
                    ListElement {Name1:  "ACC4"; page: "4"}
                    ListElement {Name1:  "ACC5"; page: "5"}
                    ListElement {Name1:  "ACC6"; page: "6"}
                }

                ListView {
                    id: listView
                    anchors.fill: parent
                    model: myListmodel
                    spacing : 2
                    interactive: false
                    delegate: Column {
                        id: myColumn
                        width: rect2_1.width
                        height: rect2_1.height/6
                        //anchors.right:  parent.right
                        Rectangle {
                            id: rect4
                            width: parent.width
                            height:  parent.height
                            border.color: "black"
                            color: "white"
                            border.width: 1
                            Text {
                                id: name
                                text: page
                                anchors.centerIn: parent
                            }
                        }
                    }
                }
            }
            Rectangle {
                id: rect2_2
                width: parent.width - 40
                height: parent.height - 10
                anchors.left: rect2_1.right
                // border.color: "black"
                // border.width: 1
                color: "paleturquoise"

                ListView {
                    id: listView2_2
                    anchors.fill: parent
                    model: myListmodel
                    spacing: 2
                    interactive: false
                    delegate: Rectangle {
                        id: myColumn2
                        width: rect2_2.width
                        height: rect2_2.height/6
                        color: ListView.isCurrentItem ? "blue" : "yellow"
                        property int i: index
                        border.color: "black"
                        Rectangle {
                            id: rect6
                            width: parent.width
                            height: parent.height
                            //background: Rectangle{
                            border.color: "black"
                            color: "gold"
                            border.width: 1

                            Text {
                                id: name2
                                text: Name1
                                font.pixelSize: 20
                                anchors.left: rect6.left
                                anchors.top:  rect6.top
                                anchors {
                                    topMargin: 10
                                    leftMargin: 10
                                }
                            }
                            MouseArea{
                                anchors.fill: parent
                                onClicked: {
                                    listView2_2.currentIndex = index
                                    headername = Name1
                                }
                            }
                        }
                    }
                }
            }
        }

        ////right1
        Rectangle {
            id: rect3
            width: parent.width/2 - 10
            height: parent.height
            anchors.right: parent.right
            border.color: "black"
            color: "blue"
            Rectangle {
                id: rect3_0
                width:parent.width
                height: 50
                anchors.top: rect3.top
                //border.color: "black"
                border.width: 1
                color: "blue"
                Text {
                    id: name3_0
                    text: headername
                    font.pixelSize: 10
                    anchors.left: rect3_0.left
                    anchors.top:  rect3_0.top
                    anchors {
                        topMargin: 10
                        leftMargin: 10
                    }
                    color: "white"
                }
            }

            /////
            Rectangle {
                id: rect3_1
                width: rect3.width/2 - 5
                height: parent.height - 50 - 10
                anchors.left: parent.left
                anchors.top: rect3_0.bottom
                border.color: "black"
                color: "blue"

                ListModel{
                    id: myListmodel1
                    ListElement {Name1:  "Full Name";}
                    ListElement {Name1:  "Rank";}
                    ListElement {Name1:  "Domain";}
                    ListElement {Name1:  "Age";}
                    ListElement {Name1:  "Gender";}
                    ListElement {Name1:  "Allocated";}
                }

                ListView {
                    id: listView1
                    anchors.fill: parent
                    model: myListmodel1
                    spacing: 2
                    interactive: false
                    delegate: Column {
                        id: myColumn1
                        width: rect3_1.width
                        height: rect3_1.height/6
                        anchors.right:  parent.right
                        Rectangle {
                            id: rect5
                            width: parent.width
                            height:  parent.height
                            border.color: "black"
                            color: "gold"
                            border.width: 1
                            Text {
                                id: name1
                                text: Name1
                                anchors.centerIn: parent
                            }
                        }
                    }
                }
                Rectangle {
                    id: rect3_2
                    width: rect3.width/2
                    height: parent.height
                    anchors.left: rect3_1.right
                    anchors.leftMargin: 5
                    border.color: "black"
                    color: "blue"
                    anchors.bottom: rect3.bottom

                    /*ListView {
                        id: listView3_2
                        anchors.fill: parent
                        model: myListmodel1
                        spacing: 2
                        interactive: false
                        delegate:*/ Column {
                            id: myColumn3
                            //width: rect3_2.width
                            //height: rect3_2.height/6
                            anchors.right:  parent.right
                            anchors.top: parent.top
                            spacing:2
                            Rectangle {
                                id: rect7
                                width: 200
                                height:  65
                                border.color: "black"
                                color: "gold"
                                border.width: 1
                                TextField {
                                    id: txtfullname
                                    text: myBackend.fullname
                                    placeholderText: fullname
                                    anchors.centerIn : parent
                                }
                            }
                            Rectangle {
                                id: rect8
                                width: 200
                                height:  65
                                border.color: "black"
                                color: "gold"
                                border.width: 1
                                TextField {
                                    id: txtrank
                                    text: myBackend.rank
                                    placeholderText: rank
                                    anchors.centerIn : parent
                               }
                            }
                            Rectangle {
                                id: rect9
                                width: 200
                                height:  65
                                border.color: "black"
                                color: "gold"
                                border.width: 1
                                TextField {
                                    id: txtdomain
                                    text: myBackend.domain
                                    placeholderText: domain
                                    anchors.centerIn : parent
                                }
                            }
                            Rectangle {
                                id: rect10
                                width: 200
                                height:  65
                                border.color: "black"
                                color: "gold"
                                border.width: 1
                                TextField {
                                    id: txtage
                                    text: myBackend.age
                                    placeholderText: age
                                    anchors.centerIn : parent
                                }
                            }
                            Rectangle {
                                id: rect11
                                width: 200
                                height:  65
                                border.color: "black"
                                color: "gold"
                                border.width: 1
                                TextField {
                                    id: txtgender
                                    text: myBackend.gender
                                    placeholderText: gender
                                    anchors.centerIn : parent
                                }
                            }
                            Rectangle {
                                id: rect12
                                width: 200
                                height:  65
                                border.color: "black"
                                color: "gold"
                                border.width: 1
                                TextField {
                                    id: txtallocated
                                    text: myBackend.allocated
                                    placeholderText: allocated
                                    anchors.centerIn : parent
                                }
                            }
                        }
                    }


            }
        }
    }
}
