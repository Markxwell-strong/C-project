/*This is a program to show structures in a book introduction to programming
Authour:Mark kibui
Date of coding: 24/10/2024*/
#include <stdio.h>
struct book {
    char title[30];
    char author[30];
    int publicationYear;
    char ISBN[13];
    float price;
};
int main() {
    struct book myBook = {
        "Introduction to C Programming",
        "John Smith",
        2022,
        "9780131103627",
        49.99
    };
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publicationYear);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: %.2f\n", myBook.price);
    struct book userBook;
    printf("\nEnter the title: ");
    fgets(userBook.title, sizeof(userBook.title), stdin);
    printf("Enter the author: ");
    fgets(userBook.author, sizeof(userBook.author), stdin);
    printf("Enter the publication year: ");
    scanf("%d", &userBook.publicationYear);
    printf("Enter the ISBN: ");
    scanf("%s", userBook.ISBN);
    printf("Enter the price: ");
    scanf("%f", &userBook.price);
    printf("\nEntered Book Details:\n");
    printf("Title: %s", userBook.title);
    printf("Author: %s", userBook.author);
    printf("Publication Year: %d\n", userBook.publicationYear);
    printf("ISBN: %s\n", userBook.ISBN);
    printf("Price: %.2f\n", userBook.price);
    return 0;
}
