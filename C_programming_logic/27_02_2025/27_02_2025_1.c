/* 1. Program Questions
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




/*2. Program Questions
LeapYear
[Tile: Leap Year or Not] [Using if-else]
----------------------------------------
Write a C program to determine if a given year is a leap year or not based on the following conditions: [Using if-else]

A year is a leap year if :- 
----------------------------
It is divisible by 4, and
It is not divisible by 100, except:
If it is divisible by 400, then it is a leap year.

Example Input:
--------------
Enter a year: 2020

Example Output:
---------------
Leap Year

Additional Test Cases:
----------------------

Test Case 1 :-
---------------
Input: 1900

Output: Not a Leap Year

Test Case 2 :-
--------------
Input: 2000
Output: Leap Year

Test Case 3 :-
---------------
Input: 2024
Output: Leap Year

Test Case 4 :-
--------------
Input: 2100
Output: Not a Leap Year
Sample Input
2020
Sample Output
Leap Year

*/
#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%4==0&&year%100!=0||year%400==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
}

/*
3. OddEven
Write a C program to check whether a number is even or odd.

case 1:
input :
	Enter a number : 5
output :
	Is odd

case 2:
input :
	Enter a number : 8
output :
	Is even

case 3:
input :
	Enter a number : -6
output :
	Is even
Sample Input
8
Sample Output
even
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

#include<stdio.h>
int main()
{
    int num1;
    scanf("%d",&num1);
    if(num1%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}




/*
4. PassOrFail
Write a C program that takes the marks of a student in three subjects as input and prints whether the student has passed or failed in three subject using  if statement.
	if marks is above 35 then pass and student is fail in any one subject then fail.


Sample input  :  
		Enter three subject marks : 57 66 88
Sample output : 
		Result is pass 

Sample input  :  
		Enter three subject marks : 71 64 32
Sample output : 
		Result is Fail
Sample Input
57
66
88
Sample Output
Result is pass
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


#include<stdio.h>
int main()
{
    int sub1,sub2,sub3;
    scanf("%d%d%d",&sub1,&sub2,&sub3);
    if(sub1>35&&sub2>35&&sub3>35)
    {
        printf("Result is pass");
    }
    else
    {
    printf("Result is Fail");
    }
}




/*
6.  ProfitLoss
Write a C program to calculate the profit or loss based on the user input.
Take Cost price and selling price from the user. 

Case 1:
input:
	Enter Cost Price: 100
	Enter Selling Price: 120
output:
	Profit is: 20.00

Case 2:
input:
	Enter Cost Price: 200
	Enter Selling Price: 180
output:
	Loss is: 20.00

 Case 3:
input:
	Enter Cost Price: 300
	Enter Selling Price: 300
output:
	No profit or loss.
*/

#include<stdio.h>
int main()
{
    float c_price,s_price;
    scanf("%f%f",&c_price,&s_price);
    if(s_price>c_price)
    {
        printf("Profit is: %.2f",(s_price-c_price));
    }
    else
    {
        printf("Loss is: %.2f",c_price-s_price);
    }


}




/*
7 . Vowel or Consonant
Write a c program to check the given Character is Vowel or Consonant
Sample Input
a
Sample Output
a is a Vowel
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
python, c, csharp, java, javascript */

#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("%c is a Vowel",ch);
    }

    else
    {
        printf("%c is a Consonant",ch);
    }
}


/* 8. Triangle Valid Or Not
Write a C program to check whether a triangle is valid or not if angles are given using if else. How to check whether a triangle can be formed or not, if its angles are given using if else in C programming.
Sample Input
60 30 90
Sample Output
The triangle is valid
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
python, c, csharp, java, javascript*/

#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180 && a>0 && b>0 && c>0)
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("The triangle is invalid");
    }

}







