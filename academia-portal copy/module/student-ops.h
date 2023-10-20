#ifndef STUDENT_OPS
#define STUDENT_OPS

void handle_student_operations(int socket_fd, char login_id[]);
int deEnrollStudentInCourse(char student_id[], char course_id[]);

#endif