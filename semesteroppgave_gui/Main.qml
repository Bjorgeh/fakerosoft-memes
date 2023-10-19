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

    //Variables for usercode
    property bool isAdmin: false
    property bool isTeacher: false
    property bool isStudent: false

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

            //Adds logo to loginpage
            Image{
                width: parent.width /3
                height: parent.height /10
                source: "Images/Logo/FakerosoftLogo.jpg"
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.top: parent.top
                anchors.topMargin: 50
            }
        }

        // page 2 (default)
        Rectangle {

            D.StartPage{
            }
        }
    }
}
