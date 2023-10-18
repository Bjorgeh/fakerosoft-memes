import QtQuick
import QtQuick.Controls.Material

Item {
    anchors.centerIn: parent
    Button{
        anchors.centerIn: parent
        text: "Edit user"
        visible: isAdmin
    }
}
