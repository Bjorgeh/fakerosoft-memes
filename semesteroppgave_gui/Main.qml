import QtQuick
import QtQuick.Window
import QtQuick.Controls
import "./login" as L
import "./defaultpage" as D

Window {
    id: root
    width: 1200
    height: 800
    visible: true
    title: qsTr("Fakerosoft Memes")

    //Color variables for easy dynamics
    property string backgroundColor: "midnightblue"
    property string topMenuBarColor: "darkgray"

    //Login name
    property string loggedIn: ""

    //SwipeView for page swipeing
    SwipeView {
        id: swipeViewFrontpage
        anchors.fill: parent
        currentIndex: 0

        //set true for test, skips login
        interactive: false

        // Page 1 (login)
        Rectangle {

            L.LoginPage {
            }
        }

        // page 2 (default)
        Rectangle {

            D.StartPage{
            }
        }
    }
}
