//program to calculate employee's net income
/*Program should be used to determine annual net income
Author: Mark Kibui
Date 9/22/2024*/
#include <stdio.h>
int main() {
    char P;//This is the pesonal letter of every employee
    float T;//This is the tax paid by the employee anually
    float I;//This is the gross income that the employee recieve
    char name[100];//name of the employee with a legth of 99 characters plus a null terminator
    int number;//Id number of the employee
    float N;//This is the Net annual income
    printf("Please enter your name\n");
    scanf("%s",&name);
    printf("Please enter your Id\n");
    scanf("%d",&number);
    printf("Please enter your personal letter\n");
    scanf(" %c", &P);
    printf("Please enter your gross income\n");
    scanf("%f",&I);
    printf("Please enter the Tax you pay\n");
    scanf("%f",&T);
    N=I-T;//formulae to find net income by subtacting tax from gross income
    printf("Your name is %s\n",name);
    printf("Your Id is %d\n",number);
    printf("Your personal letter is %c\n",P);
    printf("Your gross income is %f\n",I);
    printf("You pay a tax of %f\n",T);
    printf("This is your Net Income %f\n",N);

    return 0;
}
