import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material

Item {
    anchors.centerIn: parent
    Button{
        anchors.centerIn: parent
        text: "Create classroom"
        //Makes button visible only for user with admin role.
        visible: isTeacher

        //Functionality will be added here.
    }
}
