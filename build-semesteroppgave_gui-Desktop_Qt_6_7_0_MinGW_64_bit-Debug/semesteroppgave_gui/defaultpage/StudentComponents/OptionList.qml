import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

Item {
    Column{
        id: studentOptionCol
        Label{
            text:"Student Menu:"
            color: "white"
            visible: isStudent
        } //maybe Remove this later
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
