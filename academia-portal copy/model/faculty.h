#ifndef FACULTY_MODEL
#define FACULTY_MODEL

struct Faculty {
    char faculty_id[6]; //FAxxx\0
    char name[50];
    char email[50];
    char dept[50];
    char password[50];
};

#endif