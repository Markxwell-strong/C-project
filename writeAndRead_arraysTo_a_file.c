/*A pogram to write and read arrays to a file using fwrite
Authour: Mark kibui wanjau
Date of coding 11/28/2024*/
#include <stdio.h>
struct Student {
    char name[50];
    int marks;
};
int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n], readStudents[n];
    FILE *file = fopen("students.bin", "wb");
    for (int i = 0; i < n; i++) {
        scanf("%s %d", students[i].name, &students[i].marks);
    }
    fwrite(students, sizeof(struct Student), n, file);
    fclose(file);
    file = fopen("students.bin", "rb");
    fread(readStudents, sizeof(struct Student), n, file);
    fclose(file);
    for (int i = 0; i < n; i++) {
        printf("%s %d\n", readStudents[i].name, readStudents[i].marks);
    }
    return 0;
}