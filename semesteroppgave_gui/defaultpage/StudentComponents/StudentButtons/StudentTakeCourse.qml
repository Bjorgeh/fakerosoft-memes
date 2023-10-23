import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material

//Item for button import
Item {
    anchors.centerIn: parent
    Button{
        anchors.centerIn: parent
        text: "Take course"
        //Makes button visible only for user with student role.
        visible: isStudent

        //Functionality will be added here.
    }
}
