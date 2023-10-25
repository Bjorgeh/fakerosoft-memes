import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Controls.Material 2.15
import QtQuick.Layouts 1.15

Item {

    // Function for adding labels with usernames and accessCodes
    function adminViewShowActiveUsers() {
        if (isAdmin) {
            for (let i = 0; i < authUser.getAllUsers().length; i += 2) {
                var user1 = authUser.getAllUsers()[i];
                var user2 = (i + 1 < authUser.getAllUsers().length) ? authUser.getAllUsers()[i + 1] : "";
                var labelText = user1 + " : " + user2;
                labelsModel.append({ text: labelText, color: "white" });
            }
        } else {
            console.log("isAdmin = false @ ActiveUsers.qml")
        }
    }

    //Column showing labes & checkbuttons
    Column {
        id: adminActiveUserCol
        Label {
            text: "Active users:"
            color: "white"
            visible: isAdmin
        }

        //Model for adding labels
        Repeater {
            model: ListModel {
                id: labelsModel
            }

            //Sets label left in row and checkbox right
            RowLayout {
                Label {
                    text: model.text
                    color: "white"
                    property bool checked: false
                }

                //Checkbox for marking usernames+codes in column.
                CheckBox {
                    //Functionality will come here.
                }
            }
        }
    }
}
