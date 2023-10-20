#ifndef COURSE_MODEL
#define COURSE_MODEL

struct Course {
    char course_id[6]; //COxxx\0
    char name[50];
    int credits;
    int total_seats;
    int filled_seats;
    char faculty_id[6]; //FAxxx\0
    bool isActivated;
};

#endif