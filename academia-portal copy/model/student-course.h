#ifndef STUDENT_COURSE_MODEL
#define STUDENT_COURSE_MODEL

struct Student_Course {
    char std_id[6]; //MTxxx\0
    char course_id[6]; //COxxx\0
    bool hasEnrolled;
    time_t enrolledTimestamp;
};
// de enrolled timestamp is of no use

#endif