# semesteroppgave_23
Systemdesign og arkitektur


High Level functionality diagram for the project
![High level functionality diagram](https://github.com/Bjorgeh/semesteroppgave_23/assets/122554284/efec58f7-cd46-4039-be30-84ebbbb8c107)

The functionality diagram above can be divided into high to medium level, where it may even have the potential to become a diagram of full spectrum caliber, going from high to low level. At the highest level, we have a GUI with login for users.

![1](https://github.com/Bjorgeh/semesteroppgave_23/assets/122554284/101ed60b-0b4f-47ef-877a-882b142fa9b7)<br>

Here, the user is asked to enter a username and password when logging in, the information is passed on in the system and is checked against an authorization function, based on the response from this, the user is given choices that are displayed only for their role.

<h1><b>The administrator role</b></h1> has the choices here as seen further in the diagram:
<br>
![2](https://github.com/Bjorgeh/semesteroppgave_23/assets/122554284/b88091f9-9131-4571-a956-5c058a9958cb)
 
A user with this role has access to 'user management', where you can create new users or edit existing users.
<br>
![3](https://github.com/Bjorgeh/semesteroppgave_23/assets/122554284/ef6baa12-bc54-4e14-bb1e-ac049e5c28dd)

<h1><b>Teacher role:</b></h1>
<br>
![4](https://github.com/Bjorgeh/semesteroppgave_23/assets/122554284/218c24e8-69d5-4a46-9e1a-156299ecfe1e)

A user with these privileges has the ability to create a classroom or look at student statistics (grades and progress).
Creating a classroom gives the user several options:
<br>
![5](https://github.com/Bjorgeh/semesteroppgave_23/assets/122554284/ec2c610a-38ec-4d10-9b4e-868cda4388c0)

Once a classroom has been created, the user will be able to start a school lesson, chat with students and/or other participants in the session, switch on the camera and record the lesson.
More features included:
<br>
![6](https://github.com/Bjorgeh/semesteroppgave_23/assets/122554284/f41b8e8e-cecc-4e59-8447-a741e313b7d6)

A user with the teacher role will also be able to create courses, set subjects/topics and enter their own content. We have also decided on tests/quizzes where a subject/theme is set and the user can create his own questions.

Furthermore, the user will be able to view a student's statistics:
<br>
![7](https://github.com/Bjorgeh/semesteroppgave_23/assets/122554284/a6656e1a-a5e7-42b6-b73c-fa0752ac885e)

The functionality here to be able to follow a student's development and comment on places in the statistics where desired, this will be able to be printed if necessary. From this part of the program, teachers will also be able to publish grades or changes for students.
<h1><b>The student role</b></h1>
<br>

![8](https://github.com/Bjorgeh/semesteroppgave_23/assets/122554284/0bcda561-746c-40d9-b5fc-8038a40ea2b2)

A student logging into the program will have the choices of taking a course set up by a teacher, joining a classroom, taking a test or looking at their grades.
In a course, this type of user will be able to read, see or listen to the information added by the teacher. Students will have access to classrooms they are members of, where digital teaching takes place through streaming, file sharing and chatting.
<br>

![9](https://github.com/Bjorgeh/semesteroppgave_23/assets/122554284/7d1b6342-b37f-47a0-830c-3c8b863a9040)

The user also has access to tests that are easily answered and delivered, and look at their grades in the various subjects. Here, students can print grades themselves, if desired.
