import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

Item {
    id: loginPage
    anchors.fill: parent

    //rectangle for login
    Rectangle {
        anchors.centerIn: parent
        width: parent.width / 3
        height: parent.height / 3
        color: "light gray"
        radius: 5

        // Column with textfields and button to prompt login details
        ColumnLayout {
            anchors.centerIn: parent

            //Username field
            TextField {
                id: emailPrompt
                placeholderText: "E-mail"
            }

            //Password field
            TextField {
                id: passwordPrompt
                placeholderText: "Password"
                echoMode: TextInput.Password
            }

            // Login button
            Button {
                id: loginButton
                anchors.bottom: parent.bottom
                anchors.horizontalCenter: parent.horizontalCenter
                text: "Login"
                Material.background: loginButton.hovered ? "lightgreen" : parent.color;

                //Handles buttonclick with mousearea and sends user and pw to auth
                MouseArea {
                    anchors.fill: parent
                    onClicked: {

                        console.log(emailPrompt.text + " " + passwordPrompt.text)
                        //authUser(emailPrompt.text, passwordPrompt.text)

                    }
                }
            }
        }
    }
}
