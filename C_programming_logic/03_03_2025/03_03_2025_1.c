/* ElectricityBillCalculator
Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
Sample Input
40
Sample Output
Base Bill:Rs.20.00
Surcharge (20%):Rs.4.00
Total Bill:Rs.24.00
Explanation
-

Note:
Your code must be able to print the sample output from the provided sample input. However, your code is run against multiple hidden test cases. Therefore, your code must pass these hidden test cases to solve the problem statement.

Limits
Memory Limit: 1 MB

Time Limit: 60 ms

Scoring
Score is assigned if any testcase passes

Allowed Languages
python, c, csharp, java, javascript

*/
using nested if condition


#include <stdio.h>

int main()
{
     int unit;
    float bill;
    float surcharge=0.20;
    float Total_bill;
    scanf("%d",&unit);
    
    if(unit>0)
    {
        if(unit<=50)
        {
            bill=unit*0.50;
        }
        else
        {
            bill=50*0.50;
            if(unit<=150)
            {
            bill+=(unit-50)*0.75;
            }
            else
            {
                bill+=100*0.75;
                if(unit<=250)
                {
                    bill+=(unit-150)*1.20;
                }
                else
                {
                    bill+=100*1.20;
                  bill+=(unit-250)*1.50;
                }
                
            }
        }
        printf("Base Bill:Rs.%.2f\n", bill);
        surcharge=surcharge*bill;
        printf("Surcharge (20%%):Rs.%.2f\n", surcharge);
        Total_bill=bill+surcharge;
        printf("Total Bill:Rs.%.2f\n", Total_bill);
    }
    else {
        printf("Invalid input! Units must be greater than zero.\n");
    }


    return 0;
}


