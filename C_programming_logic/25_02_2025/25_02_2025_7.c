/*
NumberIsDivisibleByFive
Write a C program that checks if a given number is divisible by 5.
Sample Input
25
Sample Output
Divisible by 5
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
    int num1;
    scanf("%d",&num1);
    if(num1%5==0)
    {
        printf("Divisible by 5");
    }
    if(num1%5!=0)
    {
        printf("Not divisible by 5");
    }
}
