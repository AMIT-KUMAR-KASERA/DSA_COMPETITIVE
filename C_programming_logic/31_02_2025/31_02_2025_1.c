/* CalculateGrades

[Title:- Determine Student Grade Based on Total Marks] 
-------------------------------------------------------
Write a program that takes the marks of five subjects as input (each subject mark should be between 0 and 100). The program should:

Check if all marks are within the range of 0–100. If any marks are invalid, display an error message and exit.
If any subject mark is below 35, directly display "Fail" without calculating the total or grade.
Otherwise, calculate the total marks, percentage, and determine the grade using the following criteria:

-> 90%–100%: Grade A
-> 75%–89%: Grade B
-> 50%–74%: Grade C
-> 35%–49%: Grade D
-> Below 35%: Fail

Test Cases-1 :-
---------------
Input:
------
Subject 1: 95
Subject 2: 89
Subject 3: 88
Subject 4: 92
Subject 5: 91

Output:
-------
Total Marks: 455
Percentage: 91.0%
Grade: A (Valid)

Test Cases-2 :-
---------------
Input:
------
Subject 1: 85
Subject 2: 90
Subject 3: 110
Subject 4: 88
Subject 5: 92

Output:
-------
"Invalid input. Marks for each subject must be between 0 and 100." (Invalid)

Test Cases-3 :-
----------------
Input:
------
Subject 1: 20
Subject 2: 25
Subject 3: 30
Subject 4: 35
Subject 5: 40

Output:
--------
"Fail" (Valid)

Test Cases-4 :-
----------------
Input:
------
Subject 1: 40
Subject 2: 50
Subject 3: 34
Subject 4: 60
Subject 5: 70

Output:
--------
"Fail" (Valid - One subject is below 35)
Sample Input
95
89
88
92
91
Sample Output
Total Marks: 455
Percentage: 91.0%
Grade: A
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
    int sub1,sub2,sub3,sub4,sub5,total;
    float per;
    int grade=0;
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    if(total=sub1>0&&sub1<=100||sub2>0&&sub2<=100||sub3>0&&sub3<=100||sub4>0&&sub4<=100||sub5>0&&sub5<=100)
    {
        total=sub1+sub2+sub3+sub4+sub5;
        per=(float)total/5;

        if(per>=90&&per<=100)
        {
            grade=1;
        }
        else if(per>=75&&per<=89)
        {
            grade=2;
        }
        else if(per>=50&&per<75)
        {
            grade=3;
        }
        else if(per>=35&&per<50)
        {
            grade=4;
        }
        else{
            grade=5;
        }
        
        switch(grade)
        {
            case 1:
                  printf("Total Marks: %d\n",total);
                  printf("Percentage: %.2f%\n",per);
                  printf("Grade: A\n");
                  break;
            case 2:
            printf("Total Marks: %d\n",total);
                  printf("Percentage: %.2f%\n",per);
                  printf("Grade: B\n");
                  break;
            case 3:
            printf("Total Marks: %d\n",total);
                  printf("Percentage: %.2f%\n",per);
                  printf("Grade: C");
                  break;
            case 4:
            printf("Total Marks: %d\n",total);
                  printf("Percentage: %.2f%\n",per);
                  printf("Grade: D\n");
                  break;
            case 5:
            
                  printf("Fail\n");
        }
    }
    else
    {
        printf("display an error message and exit.");
    }
}

/*
Calculate the Day of the Week
[Title:- Calculate the Day of the Week]
----------------------------------------
Write a program that takes a number (1-7) as input and prints the day of the week using a switch statement. If the number is outside this range, display an error message.

Test Case-1 :-
--------------
Input :- 1
--------

Output :- "Monday" (Valid)
----------

Test Case-2 :-
--------------
Input :- 7
--------

Output :- "Sunday" (Valid)
---------

Test Case-3 :-
--------------
Input :- 0/-1
--------

Output :- "Invalid day number. Enter a number between 1 and 7." (Invalid)
---------
Sample Input
1
Sample Output
Monday
Explanation
Use switch case's

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
    int num;
    scanf("%d",&num);
    switch(num)
    {
      
        case 1:
        printf("Monday");
        break;
         case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Frieday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Invalid input! Please enter a number between 1 and 7.");
    }
}

/*
Arithmetic Operation
Write a C program to do a arithmetic operation on two numbers by using Switch Case. 
Take the operators(+,-,*,/,%) as cases and take the input from the user that what kind of operation user want to do on two number.


Sample input :

Enter num1 :10
Enter num2 :20
Enter operation : *


Sample output :

Multiplication is :200
Sample Input
10
20
+
Sample Output
Addition is : 30
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
    int num1,num2;
    char ch;
    scanf("%d%d",&num1,&num2);
    scanf(" %c",&ch);
    
  
    switch(ch)
    {
        case '+':
        printf("Addition is: %d",(num1+num2));
        break;
        case '-':
        printf("Subtraction is: %d",(num1-num2));
        break;
        case '*':
        printf("Multiplication is: %d",(num1*num2));
        break;
        case '/':
        printf("Division is: %d",(num1/num2));
        break;
        case '%':
        printf("Module is: %d",(num1%num2));
        break;


    }
}

/*

DaysInAMonth
[Title: Determine the Number of Days in a Month Based on User Input]
--------------------------------------------------------------------

Problem Statement :-
--------------------
Write a C program that takes a month number (1-12) as input from the user and prints the number of days in that month using a switch statement. If the user enters a number outside the range of 1-12, the program should display an error message.

Explanation :-
--------------
-> Use a switch statement to handle different cases for each month:
-> For months with 31 days (January, March, May, July, August, October, December), display "31 days".
-> For months with 30 days (April, June, September, November), display "30 days".
-> For February (month 2), print "28 or 29 days (depending on leap year)" (Leap years are not considered in this basic program).
-> For any invalid month number (not between 1 and 12), print "Invalid month number".

Program Logic :-
----------------
Prompt the user to enter the month number (1-12).
Use a switch statement to check the month number and print the corresponding number of days.
If the input is invalid (not between 1 and 12), print an error message.

Test Case 1 :- [Valid Month with 31 Days]
--------------
Input :-
---------
Enter Month: 1

Output :-
---------
31 days

Test Case 2 :- [Valid Month with 30 Days]
--------------
Input :-
--------
Enter Month: 4

Output :-
----------
30 days

Test Case 3 :- [Invalid Month (Greater than 12)]
--------------
Input :-
--------
Enter Month: 13

Output :-
---------
Invalid month number

Test Case 4 :- [February (28 or 29 days)]
--------------
Input :-
---------
Enter Month: 2

Output :-
---------
28 or 29 days (depending on leap year)

Test Case 5 :- Invalid Month (Less than 1)
--------------
Input :-
--------
Enter Month: 0/-2[-ve/+ve]

Output :-
----------
Invalid month number
Sample Input
4
Sample Output
30 Days
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


TrafficLight
 Create a program to simulate a traffic light system using switch-case.
Input: R, Y, G (for Red, Yellow, Green)
Sample Input
R
Sample Output
Red
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
    char ch; 
    scanf("%c",&ch);
    switch(ch)
    {
        case 'R':
        printf("Red");
        break;
        case 'Y':
        printf("Yellow");
        break;
        case 'G':
        printf("Green");
        break;
        default:
        printf("Invalid Character");

    }
    
}
