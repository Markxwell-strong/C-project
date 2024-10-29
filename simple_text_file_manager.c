/*This is a program to manage simple text file operations
Author: Mark kibui wanjau
Date of coding:28/10/2024*/
#include <stdio.h>
void write_sentense() {
    char sentense[100];
    FILE *file =fopen("data.txt" ,"w");
if(file ==NULL) {
    printf("Opening file unsuccessful!");
    return;
    }
    printf("Enter a sentence of not more than 100 characters(in one sentense): ");
    fgets(sentense, sizeof(sentense), stdin);
    fprintf(file, "%s", sentense);
    fclose(file);
}
void read_the_file() {
    char sentence[100];
    FILE *file = fopen("data.txt", "r");
    if(file ==NULL) {
    printf("Opening file unsuccessful!");
    return;
    }
    while (fgets(sentence, sizeof(sentence), file) != NULL) {
    printf("%s", sentence);
    }
    fclose(file);
}
void append_the_file() {
    char sentense[100];
    FILE *file = fopen("data.txt", "a");
    if(file ==NULL) {
    printf("Opening file unsuccessful!");
    return; 
    }
    printf("Enter another sentence: ");
    fgets(sentense, sizeof(sentense), stdin);
    fprintf(file, "%s", sentense);
    fclose(file);
}
int main() {
    int choice;
    while (1)
    {
        printf("\nMENU\n");
        printf("1. write a sentense to the file(data.text)\n");
        printf("2. Read contents of the file(data.text)\n");
        printf("3. Append a sentense to the file(data.text)\n");
        printf("4. Exit\n");
        printf("Enter your choice(use numbers to do so): ");
        scanf("%d", &choice);
        getchar();
    switch (choice)
    {
     case 1:
        write_sentense();
        break;
     case 2:
        read_the_file();
        break;
     case 3:
        append_the_file();
        break;
     case 4:
        printf("Exiting program.\n");
        return 0;
     default:
        printf("Please enter a valid choice!!!!!!!!!!!!\n");
    }
    }
}