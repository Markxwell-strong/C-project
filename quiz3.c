/*A progam to check if a bank client is eligible fo a loan
Author: Mark kibui
Date of coding: 9/26/2024*/
#include <stdio.h>
int main(){
int Y;//This is the client's age
int I;//This is the client's annual income
printf("Please enter your age\n");
scanf("%d",&Y);
printf("Please enter your annual income\n");
scanf("%d",&I);
if(Y>=21 && I>=2100){
    printf("Congratulations you qualify for a loan");
}else{
    printf("Unfortunately, we are unable to offer you a loan");
}
    return 0;
}