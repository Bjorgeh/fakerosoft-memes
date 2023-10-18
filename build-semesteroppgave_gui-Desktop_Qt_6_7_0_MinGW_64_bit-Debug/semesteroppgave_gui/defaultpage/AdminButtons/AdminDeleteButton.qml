import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material

Item {
    anchors.centerIn: parent
    Button{
        anchors.centerIn: parent
        text: "Delete user"
        visible: isAdmin
    }
}
