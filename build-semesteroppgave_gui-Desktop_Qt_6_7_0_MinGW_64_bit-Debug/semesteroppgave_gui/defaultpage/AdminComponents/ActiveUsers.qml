import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

Item {
    Column{
        id: adminAcviteUserCol
        Label{
            text:"Admin Menu:"
            color: "white"
            visible: isAdmin
        } //Maybe remove this later
        Label{
            text: "Create user"
            color: "white"
            visible: isAdmin
        }
        Label{
            text: "Edit user"
            color: "white"
            visible: isAdmin
        }
        Label{
            text: "Delete user"
            color: "white"
            visible: isAdmin
        }
    }
}
