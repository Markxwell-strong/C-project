/*A PROGRAM TO SHOW NAME AND MARKS OF n STUDENTS
AUTHOUR: Mark Kibui Wanjau
Date of coding: 11/28/2024*/
#include <stdio.h>
struct Student {
    char name[50];
    int marks;
};
int main() {
    int n;
    struct Student student;
    FILE *file = fopen("students.txt", "a");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d", student.name, &student.marks);
        fprintf(file, "%s %d\n", student.name, student.marks);
    }
    fclose(file);
    return 0;
}
