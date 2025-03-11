/* 1.Program Questions                                                                                              25_02_2025
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

/*
#include <stdio.h>

int main()
{
    int num1;
    scanf("%d",&num1);
    if(num1%3==0&&num1%5==0)
    {
        printf("Multiple of both 3 and 5");
        return 0;
    }
 
    printf("Not a Multiple of both 3 and 5");

    return 0;
}
*/


/* 2. programe
 EvenOrOdd
Write a C program that checks if a given number is even or odd.
Sample Input
4
Sample Output
Even
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


/*
Character is Uppercase or Lowercase
Write a C program that checks if a given character is uppercase or lowercase.
Sample Input
A
Sample Output
Uppercase
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
    if(ch>='A'&&ch<='Z')
    {
        printf("Uppercase");
    }
    if(ch>='a'&&ch<='z')
    {
        printf("Lowercase");
    }
   if(!(ch>='a'&&ch<='z')&&!(ch>='A'&&ch<='Z'))
   {
     printf("Not an alphabet");
   }
    return 0;
}

/*
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
        printf("Uppercase");
        return 0;
    }
    if(ch>='a'&&ch<='z')
    {
        printf("Lowercase");
        return 0;
    }
    printf("Not a alphabet");
   
    return 0;
}
*/

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

/*
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("Alphabet");
    }
    if(!((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')))
    {
        printf("Not an alphabet");

    }
    return 0;
}
*/


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

