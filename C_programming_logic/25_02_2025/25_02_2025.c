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


 /* 3.Number is Between 1 and 100
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


/*4.
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

/* 5.
CheckPositiveNegativeOrZero
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


/*6. 
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


/* 7.
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








                                                                                                            27_02_2025


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

/*Q. Write a C program that prints numbers from 1 to 10 using only goto and lable and if.
Q. Write a C program to print all even numbers from 2 to 20 using only goto and a label an if .
Q. Write a C program to print the first 10 multiples of a given number using only goto and a label and if. Do not use loops.
Input as :
Enter a number : 5
Output as: 5 10 15 20 25 30 35 40 45 50

*/
answer:-

#include <stdio.h>
int main()
{
    int i=0;
    label:
    if(i<=20)
    {
        printf("%d \n",i);
        i=i+1;
        goto label;
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int i=0;
    label:
    if(i<=20)
    {
        printf("%d \n",i);
        i=i+2;
        goto label;
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int num,i=1 ;
    printf("enter a number \n");
    scanf("%d",&num);
    label:
    if(i<=10)
    {
        printf("%d \n",i*num);
        i++;
        goto label;
    }

    return 0;
}

                                                                                                       28_02_2025
													       
/*
weekday
C program to print weekday based on given number.
Sample Input
4
Sample Output
WEDNESDAY
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
    int weekday;
    scanf("%d",&weekday);
    if(weekday==1)
    {
        printf("SUNDAY");
    }
    else if(weekday==2)
    {
        printf("MONDAY");
    }
    else if(weekday==3)
    {
        printf("TUESDAY");
    }
     else if(weekday==4)
    {
        printf("WEDNESDAY");
    }
    else if(weekday==5)
    {
        printf("THURSDAY");
    }
     else if(weekday==6)
    {
        printf("FRIEDAY");
    }
    else if(weekday==7)
    {
        printf("SATURDAY");
    }
    else
    {
        printf("INVALID DAY");
    }
    return 0;
}

/*

GradingSystem
Write a C program that takes a student's marks (0 to 100) as input and displays the corresponding grade based on the following criteria:

Grading System:
90 - 100 → Grade A
80 - 89 → Grade B
70 - 79 → Grade C
60 - 69 → Grade D
50 - 59 → Grade E
Below 50 → Fail

Use an else if ladder to determine the grade.
Ensure the program properly handles invalid input (e.g., negative marks or marks above 100).
Sample Input
85
Sample Output
Grade: B
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
    if(num1>=90&&num1<=100)
    {
        printf("Grade: A");
    
    }
    else if(num1>=80&&num1<90)
    {
        printf("Grade: B");
    }
     else if(num1>=70&&num1<80)
    {
        printf("Grade: C");
    }
     else if(num1>=60&&num1<70)
    {
        printf("Grade: D");
    }
     else if(num1>=50&&num1<60)
    {
        printf("Grade: E");
    }
      else if(num1<50)
      {
        printf("Grade: Fail");
      }
      else{
        printf("Invalid marks! Please enter between 0 and 100");
      }
    }


/*
CheckTriangle
Write a C program that takes three integers representing the sides of a triangle and determines its type using an else if ladder.
Triangle Classification Rules:

If all sides are equal, print "Equilateral Triangle".
If any two sides are equal, print "Isosceles Triangle".
If all three sides are different, print "Scalene Triangle".

Sample Input
5 5 5
Sample Output
Equilateral Triangle
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
    int one_side,two_side,three_side;
    scanf("%d%d%d",&one_side,&two_side,&three_side);
    if(one_side==two_side&&one_side==three_side)
    {
        printf("Equilateral Triangle");
    }
    else if((one_side==two_side&&one_side!=three_side)||(one_side==three_side&&one_side!=two_side)||(two_side==three_side&&three_side!=one_side))
    {
        printf("Isosceles Triangle");
    }
    else{
        printf("Scalene Triangle");
    }

}
/*

Treasure Hunt
Treasure Hunt 🏴‍☠️
Game Rules:
The player chooses a path (1, 2, or 3).
Each path leads to Treasure, Trap, or Empty.
The game prints the result based on the choice.
Path 1: Nothing here...
Path 2: You found GOLD! 
Path 3: Oops! You fell into TRAP!
if any path in not matching then print Invalid Path...!
Sample Input
2
Sample Output
You found GOLD!
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
    int path;
    scanf("%d",&path);
    if(path==1)
    {
        printf("Nothing here...");
    }
    else if(path==2)
    {
        printf("You found GOLD!");
    }
    else if(path==3)
    {
        printf("Oops! You fell into a TRAP!");
    }
    else{
        printf("Invalid Path...!");
    }
}

/*
CheckTheCharactersdigitAlphabetSpecialChar
Write a C program that takes a single character as input and determines its type using an else if ladder:

"Uppercase Letter" if it is between 'A' and 'Z'.
"Lowercase Letter" if it is between 'a' and 'z'.
"Digit" if it is between '0' and '9'.
"Special Character" otherwise.
Sample Input
9
Sample Output
Digit
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
    if(ch>='A'&&ch<='Z')
    {
        printf("Uppercase");
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("Lowercase ");
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("Digit");
    }
    else{
        printf("Special character");
    }
    
}

/*
Closest Number
Write a C program that takes two integers as input and determines which number is closest to 50 using only an else-if ladder.

Constraints:
Use  if-else if statements .
If both numbers are equally close to 50, print both numbers.
Sample Input
30 60
Sample Output
Number closest to 50: 60 
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
    scanf("%d%d",&num1,&num2);
    if(50-num1>num2-50)
    {
        printf("Number closest to 50: 60");
    }
    else if(num1-50>50-num2)
    {
         printf("Number closest to 50: 48");
    }
    else{
        printf("Both numbers are equally close to 50: 40 and 60");
    }
}

/*
Find Maximum
Write a c program to find the maximum number among three number
Sample Input
5
6
7
Sample Output
7
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
int main()
{
    int num1,num2,num3;
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2&&num1>num3)
    {
        printf("%d",num1);
    }
    else if(num2>num1&&num2>num3)
    {
        printf("%d",num2);
    }
    else if(num3>num1&&num3>num2)
    {
        printf("%d",num3);
    }
    else{
        printf("All are same");
    }
}

/*

Program Questions
Strictly Increasing Order
Write a C program that takes  3 integer N1, N2, N3 and checks if its digits are in strictly increasing order (left to right) or Decreasing Order.
For example : 
N1 = 1, N2 = 2, N3 = 4
N1<N2<N3 [Strictly Increasing]

If the digits increase strictly, print "Strictly Increasing".
If the digits are equal anywhere, print "Not Strictly Increasing".
If the digits decrease at any point, print "Decreasing Order".

Use only else-if ladder.
Sample Input
1 2 3
Sample Output
Strictly Increasing
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
    int num1,num2,num3;
    scanf("%d%d%d",&num1,&num2,&num3);
    if((num1<num2)&&(num2<num3))
    {
        printf("Strictly Increasing");
    }
    else if((num1>num2)&&(num2>num3))
    {
        printf("Decreasing Order");
    }
    else
    {
    printf("Not Strictly Increasing");
    }
}
                                                                                         
                                                                                                 03_03_2025
													 
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
2nd question=ravi
                                                                                                   
	
	
	                                                                                              04_03_2025

	
/* Write a C program for a service center by following given Rules and Guide lines.

-> This service center only accepts 2 wheeler ,3 wheeler & 4 wheeler . If any other vehicle

came to you , you have to show a message that "this service center is not accepting

other than 2 wheeler, 3 wheeler and 4 wheeler".



-> If the vehicle is 2 ,3 & 4 only then you have to ask the user what is the age of the vehicle.



-> If the age your vehicle is above 8 months then only accept the service center

otherwise you have to show a message that "your vehicle servie will done after a while".



-> If the vehicle age is greater than 8 months then show options to the user on the console.



Options:
--------


1)Enter 1 for tyre problem

2)Enter 2 for fuel problem

3)Enter 3 for engine issue

4)Enter 4 for general services



-> If the user enter 1 as input so it is tyre problem statement so you have to show a message "how many tyres you are facing the issue ?", based on the issue on the no of tyres,

generate the bill.



-> For example tyre cost Rs. 400 , if the user providing 3 tyre then the bill should be

generated as Rs. 1200 in below format.



Name of the owener

Name of the bike

Issue

Bill



-> For fuels problem cost is Rs.1500

-> For engine issue cost is Rs.5000

-> For general servicing cost is Rs.1000

And generate the bill in the above format. */

use simple if and nested if

#include <stdio.h>

int main()
{
    int type1,age,choice,tyre,total;
    char name[10],bike[10],issue[10];
    printf("which type of vehicle like:- 2 wheeler, 3 wheeler &4 wheeler\n");
    scanf("%d",&type1);
    if(type1==2||type1==3||type1==4)
    {
        printf("enter the age of the vehicle \n");
        scanf("%d",&age);
        if(age>8)
        {
            printf("Enter 1 for type problem \n");
            printf("Enter 2 for fuel problem \n");
            printf("Enter 3 for engine issue\n");
            printf("Enter 4 for general services\n");
            scanf("%d",&choice);
            if(choice==1)
            {
                printf("how many tyres you are facing the issue");
                scanf("%d",&tyre);
                total=400*tyre;
            }
            if(choice==2)
            {
                printf("facing the issue is fuel problem");
                total=1500;
                
            }
             if(choice==3)
            {
                printf(" facing the issue engine");
                
                total=5000;
                
            }
             if(choice==4)
            {
                printf("for general services cost  ");
                total=1000;
                
            }
            
            printf("Enter owner name\n");
            scanf("%s",name);
            printf("Enter name of the bike");
            scanf("%s",bike);
            printf("Enter issue");
            scanf("%s",issue);
          printf("Name of the owener %s \n",name);
          printf("Name of the bike %s\n",bike);
          printf("Name of the issue %s\n",issue);
          printf("Bill:%d\n",total);
            
            
            
            
        }
        else
        {
            printf("your vehicle servie will done after a while");
        }
    }
    else
    {
        printf("this service center is not accepting other than 2 wheeler, 3 wheeler and 4 wheeler");
    }

    return 0;
}







/*
Introduction:

Imagine strolling down a charming street, enticed by the inviting aroma of freshly brewed beverages.

You arrive at a cozy tea stall, greeted by a friendly attendant. Prepare for an interactive journey through the Tea Stall Counter!



Scenario:



Welcome and Menu:

You enter the tea stall, warmly welcomed by the attendant:



Attendant: "Welcome to our Tea Stall Counter! Our menu:"



Tea --------------------- Rs. 10

Coffee ------------------ Rs. 20

Cold coffee ------------- Rs. 50

Exit

Attendant: "Choose by entering a number (1-4):"



[User enters choice]



Customize Order:

Based on your choice, the attendant guides you:



[If choice is 1:]

Attendant: "How many cups of refreshing tea?"



[If choice is 2:]

Attendant: "How many cups of aromatic coffee?"



[If choice is 3:]

Attendant: "How many cups of chilled cold coffee?"



[User enters quantity]

Total and Payment:

The attendant shares your order total and awaits payment:



Attendant: "Total for [quantity] cup(s): Rs. [total_price]."



Attendant: "Enter your payment amount: Rs."



[User enters amount_paid]



Attendant: "Change: Rs. [change]."



Continuation or Farewell:

Choose to explore more or conclude your visit:



Attendant: "Explore more or finalize? (Type 'Y' for Yes or 'N' for No):"



[User enters order_again]



[If user wants to continue:]

Attendant: "Certainly, let's explore."



[If user doesn't want to continue:]

Attendant: "Thank you for visiting! We look forward to serving you again soon!"


*/
using if nad nested if
#include <stdio.h>
#include<stdlib.h>

int main()
{
    int choice,bill=0,cups,change,payment;
   char ch;
    
    TOP:
   printf("Welcome and Menu \n");
   printf("you enter the tea stall, warmly welcomed by the attendant \n");
   printf("Attendant:\"welcome to our tea stall Counter! Our menu \"\n");
   printf("Tea -------------------------------- Rs. 10 \n");
   printf("-----------------------------------Rs. 20\n");
   printf("---------------------------------Rs. 50\n");
   printf("Exit");
   printf("User enters choice \n");
   
   scanf("%d",&choice);
   if(choice==1)
   {
       printf("How many cups of refreshing tea?\n");
       scanf("%d",&cups);
       bill=bill+cups*10;
   }
    else if(choice==2)
   {
       printf("How many cups of aromatic coffee?");
       scanf("%d",&cups);
       bill=bill+cups*20;
   }
     else if(choice==3)
   {
       printf("How many cups of chilled cold coffee?");
       scanf("%d",&cups);
       bill=bill+cups*50;
   }
   else
   {
       exit(0);
   }
   
   printf("\nTotal for [cups] cup(s):%d \n",bill);
   printf("\nenter your payment amount: Rs\n");
   scanf("%d",&payment);
   change=bill-payment;
   printf("change:Rs.%d \n",change);
   
   printf("Explore more or finalize? (Type 'Y' for Yes or 'N' for No):\n");
   scanf(" %c",&ch);
   if(ch=='Y')
   {
       printf("user enter order_again\n");
       goto TOP;
       
   }
   else
   {
       printf("Thank you for visiting! We look forward to serving you again soon!\n");
   }
   
   
   

    return 0;
}



	
