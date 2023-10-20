cmake_minimum_required(VERSION 3.16)

project(semesteroppgave_gui VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appsemesteroppgave_gui
    main.cpp
)

qt_add_qml_module(appsemesteroppgave_gui
    URI semesteroppgave_gui
    VERSION 1.0
    QML_FILES Main.qml
    QML_FILES login/LoginPage.qml
    SOURCES auth.h auth.cpp
    SOURCES users.h users.cpp
    QML_FILES defaultpage/StartPage.qml
    QML_FILES defaultpage/AdminButtons/AdminCreateUserButton.qml
    QML_FILES defaultpage/AdminButtons/AdminEditButton.qml
    QML_FILES defaultpage/AdminButtons/AdminDeleteButton.qml
    RESOURCES Images/Logo/FakerosoftLogo.jpg
    QML_FILES defaultpage/TeacherButtons/TeacherCreateClassroom.qml
    QML_FILES defaultpage/StudentButtons/StudentEnterClassroom.qml
    QML_FILES defaultpage/StudentButtons/StudentTakeCourse.qml
    QML_FILES defaultpage/StudentButtons/StudentTakeTest.qml
    QML_FILES defaultpage/StudentButtons/StudentViewGrades.qml



)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appsemesteroppgave_gui PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appsemesteroppgave_gui
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appsemesteroppgave_gui
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS appsemesteroppgave_gui
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
