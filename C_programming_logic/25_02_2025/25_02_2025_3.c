 /* Number is Between 1 and 100
Write a C program that checks if a number is between 1 and 100.
Sample Input
50
Sample Output
Between 1 and 100
Explanation
Use Simple If

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
#include<stdio.h>
int main()
{
   int  num1;
   scanf("%d",&num1);
   if(num1>0&&num1<=100)
   {
    printf("Between 1 and 100");
   }
   if(num1>100)
   {
    printf("Not between 1 and 100");
   }
   if(num1<0)
   {
    printf("Not between 1 and 100");
   }
   return 0;

}
