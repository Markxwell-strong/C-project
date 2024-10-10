/*A progam of loop allowing User input
Author:Mark Kibui Wanjua
Date of coding:10/10/2024*/
#include <stdio.h>
int main() {
    int start, end;
    printf("Enter the starting value: \n");
    scanf("%d", &start);
    printf("Enter the ending value: \n");
    scanf("%d", &end);
    printf("For Loop:\n");
    for (int i = start; i <= end; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
