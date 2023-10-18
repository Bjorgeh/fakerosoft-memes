import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

Page {
    id: defaultPage
    anchors.fill: parent
    Rectangle{
        anchors.fill: parent
        color: root.backgroundColor

        //Top MenuBar
        Rectangle{
            id: topMenuBar
            width: parent.width
            height: parent.height/12
            color: topMenuBarColor

            //Splits topMenuBar in 4 sections from left to right
            Row {
                id: topRow
                spacing: 10
                //Section 1 (far left)
                Rectangle {
                    width: topMenuBar.width/4
                    height: topMenuBar.height
                    color: topMenuBarColor
                }

                //Section 2 (middle left)
                Rectangle {
                    width: topMenuBar.width/4
                    height: topMenuBar.height
                    color: topMenuBarColor
                }

                //Section 3 (middle right)
                Rectangle {
                    width: topMenuBar.width/4
                    height: topMenuBar.height
                    color: topMenuBarColor
                }

                //Section 4 (far right)
                Rectangle {
                    width: topMenuBar.width/4
                    height: topMenuBar.height
                    color: topMenuBarColor
                    Label{
                        text: "Logged in as:\n"+loggedIn
                    }
                }
            }
        }

        //Window under topMenuBar
        Rectangle{
            anchors.top: topMenuBar.bottom
            width: parent.width
            height: parent.height - topMenuBar.height
            color: "transparent"

            //Row 1 with column

            Row{
                spacing: 10
                x: 15
                y: 15
                /*This Columns is visiable only for admins*/
                Column{
                    Label{text:"Admins:"
                        color: "white"
                    visible: isAdmin}
                    Label{
                        text: "Create user"
                        color: "white"
                        visible: isAdmin
                    }
                    Label{
                        text: "Edit user"
                        color: "white"
                        visible: isAdmin
                    }
                    Label{
                        text: "Delete user"
                        color: "white"
                        visible: isAdmin
                    }
                }
                /*This Column is visible only for teachers*/
                Column{
                    Label{text:"Teachers:"
                        color: "white"
                    visible: isTeacher} //Remove this later
                    Label{
                        text: "Create classroom"
                        color: "white"
                        visible: isTeacher
                    }

                }
                /*This Column is visible only for Students*/
                Column{
                    Label{text:"Students:"
                        color: "white"
                    visible: isStudent} //Remove this later
                    Label{
                        text: "Enter Classroom"
                        color: "white"
                        visible: isStudent
                    }
                    Label{
                        text: "Take course"
                        color: "white"
                        visible: isStudent
                    }
                    Label{
                        text: "Take test"
                        color: "white"
                        visible: isStudent
                    }
                    Label{
                        text: "View grades"
                        color: "white"
                        visible: isStudent
                    }
                }
            }
        }
    }
}
