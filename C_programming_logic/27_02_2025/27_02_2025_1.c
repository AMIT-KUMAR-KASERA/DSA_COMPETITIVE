/* Program Questions
MarriageEligibility
Write a C program to read  age of person and  check the person is eligible for marriage or not using if-else.
	if user age is above 21 then eligible.
Sample input  :
                Enter your age: 25
Sample output :  
		you are eligible to marriage.

Sample input  :
		 Enter your age: 16
Sample output :
		 Sorry are not eligible to marriage.

Sample Input
25
Sample Output
you are eligible to marriage.
Explanation
-

Note:
Your code must be able to print the sample output from the provided sample input. However, your code is run against multiple hidden test cases. Therefore, your code must pass these hidden test cases to solve the problem statement.

Limits
Memory Limit: 1 MB

Time Limit: 60 ms

Scoring
Score is assigned if any testcase passes

Allowed Languages*/

#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if(age>21)
    {
        printf("you are eligible to marriage.");
    }
    else
    {
        printf("Sorry are not eligible to marriage.");
    }
}




