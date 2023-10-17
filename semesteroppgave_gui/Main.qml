import QtQuick
import QtQuick.Window
import "./login" as L

Window {
    id: root
    width: 1200
    height: 800
    visible: true
    title: qsTr("Fakerosoft Memes")

    property string backgroundColor: "midnightblue"

    //Rectangel for login page on main page
    Rectangle{
        anchors.fill: parent
        color: backgroundColor

        //Loads login page
        L.LoginPage{

        }
    }
}
