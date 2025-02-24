/******************************************************************************

Write a C program using the ternary operator to calculate the electricity bill for a given number of units consumed by a customer.
For the first 100 units, the rate is Rs. 3.00 per unit.
For any additional units beyond 100, the rate is Rs. 4.50 per unit.

Example 1: Units consumed less than or equal to 100
Sample Input: units consumed : 75
Sample Output: The total electricity bill is: Rs. 225.00
        
Example 2: Units consumed more than 100
Sample Input: units consumed: 150
Sample Output: The total electricity bill is: Rs. 525.00
        
Example 3: Units consumed exactly 0
Sample Input: units consumed: 0
Sample Output: The total electricity bill is: Rs. 0.00


*******************************************************************************/
#include <stdio.h>

int main()
{
    float unit;
    printf("enter units that the user consume \n");
    scanf("%f",&unit);
    (unit<=100)?printf("the total electricity bill is : %.2f",unit*3.00):(unit>100)?printf("the total electricity bill is: Rs %.2f",(100*3.00)+(unit-100)*4.50):printf("the total electricity bill is RS. %.2f",unit*0);

    return 0;
}
