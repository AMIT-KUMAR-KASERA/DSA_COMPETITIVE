/* CheckPositiveNegativeOrZero
Write a C program that checks if a given number is positive, negative, or zero.
Sample Input
10
Sample Output
Positive
Explanation
Use only simple if

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
    int num1;
    scanf("%d",&num1);
    if(num1>0)
    {
        printf("Positive");
    
    }
    if(num1<0)
    {
        printf("Negative");
    }
    if(num1==0)
    {
        printf("Zero");
    }
    
    return 0;
}
