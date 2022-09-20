import QtQuick 2.0
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
//import myfpt.Backend 1.0

Rectangle {
    id: rect1
    width: 600
    height: 400
    anchors.centerIn: parent
    color: "paleturquoise"
    property string headername: ""
//    property string fullname: ""
//    property string rank: ""
//    property string domain: ""
//    property string age: ""
//    property string gender: ""
//    property string allocated: ""

//    ScreenBuilding{
//        id: myBackend
//    }

    Rectangle{
        id:rect1_1
        anchors.centerIn: parent
        width: parent.width/2 +50
        height: parent.height/2 + 50
        color: "paleturquoise"
        //border.color: "black"

        Row {
            id: btn
            width: 160
            height: 30
            anchors.top: rect1_1.bottom
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.topMargin: 30
            Rectangle {
                width:parent.width
                height: parent.height
                //border.color: "black"
                //color: "green"

            }

            Button {
                id: back
                width: btn.width/2
                height: btn.height
                anchors.right: btn.right
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
            Button {
                id: submit
                width: btn.width/2
                height: btn.height
                anchors.left: btn.left
                text: "Submit"
//                signal qmlSignal(anObject: submit)
                MouseArea {
                    anchors.fill: parent
                    onClicked: {
//                        submit.qmlSignal(submit)
                        console.log("submid sucessful")
                        myBackend.getTodoItem(txtfullname.text,txtrank.text,txtdomain.text,txtage.text,txtgender.text,txtallocated.text)
                        myBackend.fullnameChanged()
                        myBackend.rankChanged()
                        myBackend.domainChanged()
                        myBackend.ageChanged()
                        myBackend.genderChanged()
                        myBackend.allocatedChanged()
                    }
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
                    ListElement {Name1:  "ACC1"; }
                    ListElement {Name1:  "ACC2"; }
                    ListElement {Name1:  "ACC3"; }
                    ListElement {Name1:  "ACC4"; }
                    ListElement {Name1:  "ACC5"; }
                    ListElement {Name1:  "ACC6"; }
                }

                ListView {
                    id: listView
                    anchors.fill: parent
                    model: myListmodel
                    spacing : 2
                    interactive: true
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
                //}
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
                    delegate: Column {
                        id: myColumn2
                        width: rect2_2.width
                        height: rect2_2.height/6
                        Rectangle {
                            id: rect6
                            width: parent.width
                            height: parent.height
                            //                          background: Rectangle{
                            border.color: "black"
                            color: "gold"
                            //border.width: 1
                        }
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
                                    text: ""
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
                                    text: ""
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
                                    text: ""
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
                                    text: ""
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
                                    text: ""
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
                                    text: ""
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
//}
