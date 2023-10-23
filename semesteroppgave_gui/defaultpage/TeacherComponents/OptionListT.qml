import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

Item {
    Column{
        id: teacherOptionCol
        Label{
            text:"Teacher Menu:"
            color: "white"
            visible: isTeacher
        } //maybe Remove this later
        Label{
            text: "Create classroom"
            color: "white"
            visible: isTeacher
        }
    }
}
