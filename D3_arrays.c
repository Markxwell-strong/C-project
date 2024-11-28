/*This is a program to illustrate 3D arrays which accepts user inputs
Author: Mark Kibui
Date of coding: 17/10/2024*/
#include <stdio.h>
int main() {
    int cube[2][2][2];
    printf("Enter 8 integers for a two by two by two cube:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("Enter the integer [%d][%d][%d]: ", i + 1, j + 1, k + 1);
                scanf("%d", &cube[i][j][k]);
            }
        }
    }
    printf("The entered two by two by two cube is:\n");
    for (int i = 0; i < 2; i++) {
        printf("Layer %d:\n", i + 1);
        for (int j = 0; j < 2; j++) {
            printf("[ ");
            for (int k = 0; k < 2; k++) {
                printf("%d ", cube[i][j][k]);
            }
            printf("]\n");
        }
        printf("\n");
    }

    return 0;
}
