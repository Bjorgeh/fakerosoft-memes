import QtQuick
import QtQuick.Controls

Popup {
    id: wrongPasswordPopup
    width: 200
    height: 100
    visible: true

    contentItem: Rectangle {
        width: parent.width
        height: parent.height
        color: "red"
        Text {
            text: "Wrong Password"
            color: "white"
            font.pixelSize: 20
            anchors.centerIn: parent
        }
    }
}
