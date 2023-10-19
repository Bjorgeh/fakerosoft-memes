import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

Page {
    id: loginPage
    anchors.fill: parent
    Rectangle{
        anchors.fill: parent
        color: root.backgroundColor

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

                            //prints usr & pw input for test
                            console.log(emailPrompt.text + " " + passwordPrompt.text)

                            //Sets input to userLogin obj.
                            userLogin.setUser(emailPrompt.text)
                            userLogin.setPass(passwordPrompt.text)

                            //Returns true if user exist | authUser.authorize(userLogin)
                            console.log("Auth: " + authUser.authorize(userLogin))
                            if(authUser.authorize(userLogin)){
                                swipeViewFrontpage.currentIndex = 1;
                            }

                            //Login button blinks red and password field clears
                            else{
                                blinkAnimation.start();
                                //emailPrompt.clear()
                                passwordPrompt.clear()
                                console.log("Wrong username or password!")
                            }

                            //Sets loggedin as the logged in username
                            loggedIn = userLogin.getUser();

                            //Updates bool variables for user role
                            isAdmin = userLogin.getUserCode() === 1111 ? true : false
                            isTeacher = userLogin.getUserCode() === 2222 ? true : false
                            isStudent = userLogin.getUserCode() === 3333 ? true : false

                            //console.log(isAdmin, isTeacher, isStudent)
                            //console.log(userLogin.getUserCode())
                        }
                    }
                }

                //Makes the button red when login fails
                PropertyAnimation {
                    id: blinkAnimation
                    target: loginButton
                    property: "Material.background"
                    from: "gray"
                    to: "red"
                    duration: 200 // 1 second
                    running: false
                }
            }
        }
    }
}
