/*This a program to calculate electricity bills by use of user defined functions
Author:Mark Kibui wanjau
Date of coding 17/10/2024*/
#include <stdio.h>
void getInput(int *ID, char name[], float *unitConsumed);
float calculateCharges(float unitConsumed);
float calculateSurcharge(float bill);
float calculateTotalBill(float bill, float surcharge);
int main() {
    int ID; //This is the Customer ID
    char name[20]; //This is the Customer name
    float unitConsumed;
    float charges; //This are Charges per unit
    float bill; //This is the Electricity bill
    float surcharge;
    getInput(&ID, name, &unitConsumed);
    charges = calculateCharges(unitConsumed);
    bill = charges * unitConsumed;
    surcharge = calculateSurcharge(bill);
    if (bill < 100) {
        bill = 100;
    }
    float amount = calculateTotalBill(bill, surcharge);
    printf("The customer ID is %d\n", ID);
    printf("The customer's name is %s\n", name);
    printf("The units consumed are %.3f\n", unitConsumed);
    printf("The charges per unit are %.2f\n", charges);
    printf("The total amount to pay is %.4f\n", amount);

    return 0;
}
void getInput(int *ID, char name[], float *unitConsumed) {
    printf("Enter the customer ID\n");
    scanf("%d", ID);
    printf("Enter the customer's name\n");
    scanf("%s", name);
    printf("Enter the units consumed\n");
    scanf("%f", unitConsumed);
}
float calculateCharges(float unitConsumed) {
    if (unitConsumed <= 199) {
        return 1.20;
    } else if (unitConsumed < 400) {
        return 1.50;
    } else if (unitConsumed < 600) {
        return 1.80;
    } else {
        return 2.00;
    }
}
float calculateSurcharge(float bill) {
    if (bill > 400) {
        return 0.15 * bill;
    }
    return 0;
}
float calculateTotalBill(float bill, float surcharge) {
    return bill + surcharge;
}
