import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material

//Item for button import
Item {
    anchors.centerIn: parent
    Button{
        anchors.centerIn: parent
        text: "Create user"
        //Makes button visible only for user with admin role.
        visible: isAdmin

        //Functionality will be added here.
    }
}
