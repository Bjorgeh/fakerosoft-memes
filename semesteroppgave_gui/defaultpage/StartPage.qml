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
    }
}
