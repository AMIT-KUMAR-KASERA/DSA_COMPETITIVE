/******************************************************************************

Develop a program on a payroll system for a company. 
The system needs to calculate the salary of an employee 
based on their employee type ('M' for manager or 'H' for HR employee) 
and their basic salary. 
For managers, their salary should be increased by 10% as a performance bonus and 
for HR  increased by 5% . Write a C program that takes the employee type and basic salary as 
inputs and calculates the increased salary using the ternary operator.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char ch;
    float salary;
    printf("enter the employee types \n");
    scanf("%c",&ch);
    printf("enter the basic salary of the employee \n");
    scanf("%f",&salary);
    (ch=='M')?printf("the salary should be increase by the managers %.2f",salary*10/100):(ch=='H')&&printf("the increate by the hr %.2f ",salary*5/100);

    return 0;
}
