#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
int main() {
    char path[100];
    char course[6] = "CO123";
    sprintf(path, "/Users/nishthapaul/iiitb/academia-portal/courses/%s.txt", course);
    printf("%s", path);
    int fd = creat(path, 0744);
    close(fd);
}