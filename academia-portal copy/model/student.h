#ifndef STUDENT_MODEL
#define STUDENT_MODEL

struct Student {
    char std_id[6]; //MTxxx\0
    char name[50];
    int age;
    char email[50];
    char password[50];
    int no_of_courses_enrolled;
    bool isActivated;
};

#endif