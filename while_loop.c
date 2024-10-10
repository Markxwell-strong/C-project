/*A program for while loop allowing user input
Author:Mark Kibui Wanjau
Date:10/10/2024*/
#include <stdio.h>
#include <math.h>
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
           int square=pow(i,2);
     float square_root=sqrt(i);
     int cube=pow(i,3);
     float cube_root=cbrt(i);
     printf("The square is %d\n",square);
     printf("the square root is %.2f\n",square_root);
     printf("Cube is %d\n",cube);
     printf("The cube root is %f\n",cube_root);        
        i++;
    }
    printf("\n");
    return 0;
}
