/*This is a program to demonstrate 1D arrays
Authour: Mark Kibui
Date of coding:17/10/2024*/
#include <stdio.h>
int main() {
    int arr[3];
    int sum;
    sum = 0;
    printf("Enter the your marks for the 3 Elements\n");
    for (int i = 0;i < 3; i++) {
        printf("Please enter element %d\n",i+1);
        scanf("%d", &arr[i]);
    }
printf("The entered elements are\n");
for(int i = 0;i<3;i++);
printf("[");
for (int i=0;i < 3; i++) {
    printf("%d", arr[i]);
}
printf("]\n");
return 0;
}