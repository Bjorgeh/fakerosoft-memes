//import libs
import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts
//Imports Components
import "AdminComponents" as AdminComp
import "TeacherComponents" as TeacherComp
import "StudentComponents" as StudentComp
//Import buttons
import "AdminComponents/AdminButtons" as AdminButtons
import "TeacherComponents/TeacherButtons" as TeacherButtons
import "StudentComponents/StudentButtons" as StudentButtons

Page {
    id: defaultPage
    anchors.fill: parent

    //Loads content on startPage for correct users
    function loadContent(){
        loadAdminContent.adminViewShowActiveUsers()
    }

    Rectangle{
        anchors.fill: parent
        color: root.backgroundColor

        //Top MenuBar
        Rectangle{
            id: topMenuBar
            width: parent.width
            height: parent.height/12
            color: topMenuBarColor

            //Splits topMenuBar in 4 sections from left to right
            Row {
                id: topRow
                spacing: 10
                //Section 1 (far left)
                Rectangle {
                    width: topMenuBar.width/5
                    height: topMenuBar.height
                    color: topMenuBarColor

                    //imports Admin Create button
                    AdminButtons.AdminCreateUserButton{}
                    //imports teacher create classroom button
                    TeacherButtons.TeacherCreateClassroom{}
                    //imports student enter classroom button
                    StudentButtons.StudentEnterClassroom{}
                }

                //Section 2 (middle left)
                Rectangle {
                    width: topMenuBar.width/5
                    height: topMenuBar.height
                    color: topMenuBarColor
                    //imports Admin Edit button
                    AdminButtons.AdminEditButton{}
                    //imports student take course button
                    StudentButtons.StudentTakeCourse{}
                }

                //Section 3 (middle right)
                Rectangle {
                    width: topMenuBar.width/5
                    height: topMenuBar.height
                    color: topMenuBarColor

                    //imports Admin delete button
                    AdminButtons.AdminDeleteButton{}
                    //imports student Take test button
                    StudentButtons.StudentTakeTest{}
                }

                //Section 3 (middle right)
                Rectangle {

                    width: topMenuBar.width/5
                    height: topMenuBar.height
                    color: topMenuBarColor
                    //imports student view grades button
                    StudentButtons.StudentViewGrades{}
                }

                //Section 4 (far right)
                Rectangle {
                    width: topMenuBar.width/5
                    height: topMenuBar.height
                    color: topMenuBarColor
                    Label{
                        text: "Logged in as:\n"+loggedIn
                    }
                }
            }
        }

        //Window under topMenuBar
        Rectangle{
            anchors.top: topMenuBar.bottom
            width: parent.width
            height: parent.height - topMenuBar.height
            color: "transparent"

            //Row 1 with column
            Row{
                spacing: 10
                x: 15
                y: 15

                //Shows acvite users - for admin
                AdminComp.ActiveUsers{
                id: loadAdminContent
                }

                //Shows options - for teachers
                TeacherComp.OptionListT{}

                //Shows options - for students
                StudentComp.OptionList{}

            }
        }
    }
}
