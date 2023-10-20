steps to follow to run this code
create a "data" directory and 3 empty files - students, faculties, courses.txt

TODO 1:
module/admin.c
createStudent()
if we send string in age, then client should show error message.
that invalid input
so i am thinking to check whether the age is numeric or not and send -1 from createstdnt
in switch case, we can check if it is -1, write buffer concat that invalid inut, 
please try again. do you want to continue?

TODO: in admin
check if the roll no of student entered is a valid roll no or not.
check both, starting mai MT hona chahiye and roll number list mai hona chahiye

TODO:
check if this roll no is present in database

TODO: set password of initial student and faculty
generateFacultyPassword() and generateStudentPassword()
extract them to generatePassword using name and id in common.c

TODO:
admin menu - show faculty details
on giving not existing faculty id, there is no check to see if this faculty exist or not.

.........................................
TODO:
initialize password
change password

TODO:
populate data again
and try enrolling in courses

TODO:
if student is deactivated, don't show options of enrolling course etc

TODO:
de-enroll in course

TODO:
faculty - update no of seats in a course
In this we have to do bubble sorting
and de enroll some students

TODO:
write notes to explain which function is doing what and checking what

TODO:
======= You are successfully authenticated !!! =======
remove this on top  of every menu
only show once after login

Advancements
- while showing list of courses, write (activated/deactivated) in front of couse name

TODO:
de activate student means - remove all his course enrollments