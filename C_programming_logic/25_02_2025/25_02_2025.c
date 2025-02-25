/* Program Questions
Multiple of Both 3 and 5
Write a C program that checks if a number is divisible by both 3 and 5.
Sample Input
15
Sample Output
Multiple of both 3 and 5
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
python, c, csharp, java, javascript */
#include<stdio.h>
int main()
{
    int num1;
    scanf("%d",&num1);
    if(num1%3==0&&num1%5==0)
    {
        printf("Multiple of both 3 and 5");
    }

     if(num1%3!=0 || num1%5!=0){
       printf("Not a multiple of both 3 and 5");
     }
    return 0;
}
