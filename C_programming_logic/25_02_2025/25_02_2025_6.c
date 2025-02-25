/*
Character is Alphabet
Write a C program that checks if the entered character is an alphabet letter or not.
Sample Input
a
Sample Output
Alphabet
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
    char ch;
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        printf("Alphabet");
    }
    if(!(ch>='a'&&ch<='z'))
    {
        printf("Not an alphabet");

    }
    return 0;
}

