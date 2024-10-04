/*A program to calculate the fine of overdue library books
Author:Markkibui
Date of coding:9/27/2024*/
#include <stdio.h>
int main() {
int Id;//This is the BookID
int Due;//This is the Duedate
int Return;//This is the returndate
printf("Please enter the Book ID\n");
scanf("%d",&Id);
printf("Please enter the Due date\n");
scanf("%d",&Due);
printf("Please enter the return date\n");
scanf("%d",&Return);
int overdue;//This are days overdue
overdue=Return-Due;
int rate;//This is the fine rate per day
int Amount;//this is the fine Amount
if (overdue <= 7)
{ rate=20;
    Amount = overdue*rate;
}else if(overdue <=14)
{ rate=50;
    Amount = overdue*rate;
}else{rate=100;
    Amount = overdue*rate;
}
printf("The book ID is %d\n",Id);
printf("The Due date was %d\n",Due);
printf("The book return date was %d\n",Return);
printf("The days overdue are %d\n",overdue);
printf("Your fine rate is %d\n",rate);
printf("You fine amount is %d\n",Amount);
    return 0;
}