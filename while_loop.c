/*A program for while loop allowing user input
Author:Mark Kibui Wanjau
Date:10/10/2024*/
#include <stdio.h>
int main() {
    int start, end;
    printf("Enter the starting value: \n");
    scanf("%d", &start);
    printf("Enter the ending value: \n");
    scanf("%d", &end);
    printf("While Loop:\n");
    int i = start;
    while (i <= end) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    return 0;
}
