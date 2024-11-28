/*A program to display name and marks of 5 students in a file
Name: Mark kibui wanjau
Date of coding: 11/28/2024*/
#include <stdio.h>
struct Student {
    char name[50];
    int marks;
};
int main() {
    struct Student students[5];
    FILE *file = fopen("students.txt", "w");
    for (int i = 0; i < 5; i++) {
        scanf("%s %d", students[i].name, &students[i].marks);
        fprintf(file, "%s %d\n", students[i].name, students[i].marks);
    }
    fclose(file);
    return 0;
}
