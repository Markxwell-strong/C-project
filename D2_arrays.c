/*This is a program for 2D arrays with surporting user input
Authour Mark kibui
Date 17/10/2024*/
#include <stdio.h>
int main() {
    int matrix[3][3];
    printf("Please eneter 9 inters to form a 3 by 3 matrix");
    for (int i = 0; i < 3; i++)
    {
        for (int a = 0; a < 3; a++)
        {
            printf("Please enter the element [%d][%d]: ", i + 1, a+1);
            scanf("%d", &matrix[i][a]);
        }
        
    }
printf("You entered the matrix is:\n");
for (int i = 0; i < 3; i++)
{
    printf("[ ");
    for (int a = 0; a < 3; a++)
    {
        printf("%d", matrix[i][a]);
    }
    printf("]\n");
}

return 0;   
}