#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdbool.h>

struct Student_Course {
    char std_id[6]; //MTxxx\0
    char course_id[6]; //COxxx\0
    bool hasEnrolled;
    time_t enrolledTimestamp;
};

int main() {
    int fd = open("CO001.txt", O_RDONLY);
    if (fd == -1) {
		printf("File CO001.txt doesn't exist \n");
		return 0;
	}
   
   printf("course CO001 Details : \n");
    
   struct Student_Course temp;
   while (read(fd, &temp, sizeof(struct Student_Course)) > 0) {
      printf("Student No. : %s \n", temp.std_id);
      printf("Course No. : %s \n", temp.course_id);
      printf("Enrollment status: %s \n", temp.hasEnrolled ? "enrolled" : "not enrolled");
      printf("timestamp : %ld \n \n", (long)temp.enrolledTimestamp);
   }

   close(fd);
}