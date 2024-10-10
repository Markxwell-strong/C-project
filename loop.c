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
           int square=pow(i,2);
     float square_root=sqrt(i);
     int cube=pow(i,3);
     float cube_root=cbrt(i);
     printf("The square is %d\n",square);
     printf("the square root is %.2f\n",square_root);
     printf("Cube is %d\n",cube);
     printf("The cube root is %f\n",cube_root);
    }
    printf("\n");
    return 0;
}
