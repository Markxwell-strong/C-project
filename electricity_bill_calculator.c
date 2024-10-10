/*This is a project to calculate electricity bill of a consumer per rates
Author: Mark Kibui Wanjau
Date of coding 10/10/2024*/
#include <stdio.h>
int main() {
int ID; //This is the customer ID
char name[20];//This is the customer name
float unitConsumed;
float charges;//This are the charges per unit
float bill;//This is the electicity bill
float surcharge;
printf("Enter the customer ID\n");
scanf("%d",&ID);
printf("Enter the customer's name\n");
scanf("%s",&name);
printf("Enter the unit consumed\n");
scanf("%f",&unitConsumed);
if (unitConsumed<=199)
{
    charges=1.20;
    bill=charges*unitConsumed;
}else if (unitConsumed<400)
{
    charges=1.50;
    bill=charges*unitConsumed;
}else if (unitConsumed<600)
{
    charges=1.80;
    bill=charges*unitConsumed;
}else{charges=2.00;
bill=charges*unitConsumed;}
if (bill>400)
{
    surcharge=0.15*bill;
}else{
    surcharge=0;
}
if (bill<100)
{
    bill=100;
}
float amount=bill+surcharge;
printf("The customer ID is %d\n",ID);
printf("The customers name is %s\n",name);
printf("The units consumed are %f\n",unitConsumed);
printf("The charges per unit are %f\n",charges);
printf("The total amount to pay is %f\n",amount);
    return 0;
}