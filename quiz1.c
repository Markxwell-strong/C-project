/*A program to calculate simple intrest 
It does this by accepting,principle amount,time,rate
Author: Mark Kibui
Date of coding:9/23/2024*/
#include <stdio.h>
int main() {
    float P;//This is the principal amount
    float T;//This is time for the investment
    float r;//This is the rate of intrest per period of investment
    float SI;//This is the intrest earned per period
    printf("Please enter the principal Amount\n");
    scanf("%f",&P);
    printf("Please enter the time taken for the investment\n");
    scanf("%f",&T);
    printf("Please enter the rate of intrest in the investment\n");
    scanf("%f",&r);
    SI=(P*T*r)/100;
    r=r/100;
    printf("You entered principal amount as %f\n",P);
    printf("You entered time for investment as %f\n",T);
    printf("You entered rate of the simple interst as %f\n",r*100);
    printf("You entered simple intrest earned as %f\n",SI);
    return 0;
}