/*This is a program to calculate the compound intrest
It accepts Principal amount,Interst rate,Number of compunding periods,Number of compounding perionds per yea and time in years
Author:Mark Kibui
Date of coding 9/24/2024*/
#include <stdio.h>
#include <math.h>
int main() {
    float P;//This is the principal amount
    float n;//number of compounding periods per year
    int t;//Total number of years
    float r;//Intest rate
    float A;//This is the final amount including intrest
    printf("Please enter the principal amount\n");
    scanf("%f",&P);
    printf("Please enter number of compounding perionds per year\n");
    scanf("%f",&n);
    printf("Please enter the number of years invested\n");
    scanf("%d",&t);
    printf("Please enter the rate of interst\n");
    scanf("%f",&r);
    r=r/100;
    A=P * pow((1+r/n),n*t);
    printf("You entered %f as the principal amount\n",P);
    printf("You entered %f as the number of compounding periods per year\n",n);
    printf("You entered %f as the interest rate\n",r*100);
    printf("You entered %d as the total number of years invested\n",t);
    printf("Therefore your final amount is %f\n",A);
    return 0;
}