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

                                          

         												05_03_2025

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

												     
              											06_03_2025


/*CheckCharacter
C Program to Check Whether a Character is an Alphabet, Digit, or Special Character

   Description:
   - This program prompts the user to enter a character.
   - It then classifies the input as an alphabet (A-Z, a-z), digit (0-9), or special character.

   Valid Inputs:
   - Alphabets: 'A', 'z', 'M', etc.
   - Digits: '0', '5', '9', etc.
   - Special Characters: '@', '#', '!', etc.
Sample Input
@
Sample Output
It is a special character.
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
        case 'a'...'z':printf("It is an alphabet.");
        break;
        case 'A'...'Z':printf("It is an alphabet.");
        break;
        case '0'...'9':printf("It is a digit.");
        break;
        default:
        printf("It is a special character.");
        
    }
}

/*
EmployeeDesignation
Write a C program that determines an employee's designation based on their salary range using a switch-case statement.
Salary ≥ 100000: "Senior Manager"
Salary between 70000 and 99999: "Project Manager"
Salary between 50000 and 69999: "Team Lead"
Salary between 30000 and 49999: "Software Engineer"
Salary < 30000: "Intern"
If the salary is negative, display: "Invalid Salary".
If the salary is zero, display: "Unemployed".
Sample Input
100000
Sample Output
Designation: Senior Manager
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
    int sal;
    int position=0;
    scanf("%d",&sal);
    if(sal>=100000)
    {

        position=1;
    }
    else if(sal>=70000&&sal<=99999)
    {
        position=2;
    }
    else if(sal>=50000&&sal<=69999)
    {
        position=3;
    }
    else if(sal>=30000&&sal<=49999)
    {
        position=4;
    }
    else if(sal>0&&sal<30000)
    {
        position=5;
    }
    else if(sal==0)
    {
        position=6;
    }
    else{
        printf("Invalid Salary");
    }
    switch(position)
    {
        case 1:
        printf("Designation: Senior Manager");
        break;
        case 2:
        printf("Designation: Project Manager");
        break;
        case 3:
        printf("Designation: Team Lead");
        break;
        case 4:
        printf("Designation: Software Engineer");
        break;
        case 5:
        printf("Invalid Salary");
        break;
        case 6:
        printf("Unemployed");


        
    }
    
}




#include<stdio.h>
int main()
{
    int sal;
    scanf("%d",&sal);
    switch(sal)
    {
       case 0:
       printf("Unemployed");
       break;
       case 1 ... 29000:
       printf("Intern");
       break;
       case 30000 ... 49999:
       
       printf("Designation: Software Engineer");
       break;
       case 50000 ... 69999:
       
       printf("Designation: Team Lead");
       break;
       case 70000 ... 99999:
       
       printf("Designation: Project Manager");
       break;
       case 100000:
       printf("Designation: Senior Manager");
       break;
       default:
       printf("Invalid Salary");


        
    }
    
}


/*

Program Questions
AreaOfShapes
Calculate the Area of Shapes using Switch Case
Problem Description:

Write a C program that calculates the area of different shapes (circle, triangle, and square) based on the user’s choice. The program should use a switch statement to handle different shapes. The program should prompt the user to input the necessary dimensions for each shape and then compute the area. If the user enters an invalid option, the program should display an error message.

Requirements:
The program should ask the user to choose one of the following shapes:

1.Circle
2.Triangle
3.Square
Based on the user’s selection:
Circle: Ask for the radius and compute the area using the formula:
Area = π * radius^2 (Use π = 3.14159)
Triangle: Ask for the base and height and compute the area using the formula:
Area = 0.5 * base * height
Square: Ask for the side length and compute the area using the formula:
Area = side^2
If the user enters an invalid choice, print an error message.
Sample Input
3 5
Sample Output
The area of the square is: 25.00
Explanation
No Need to Write any other printing statement.. Enter the number 1.Circle 2.Triangle 3.Square try to comment this type of print statement...

Note:
Your code must be able to print the sample output from the provided sample input. However, your code is run against multiple hidden test cases. Therefore, your code must pass these hidden test cases to solve the problem statement.

Limits
Memory Limit: 1 MB

Time Limit: 60 ms

Scoring
Score is assigned if any testcase passes

Allowed Languages

*/

#include<stdio.h>

int main()
{
    float pi=3.14159;
    int choice,r,side,base,height;
    float area;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        scanf("%d",&r);
        area=pi*r*r;
        printf("The area of the circle is: %.2f",area);
        break;
      
        case 2:
        scanf("%d%d",&base,&height);
        area=0.5*base*height;
        printf("The area of the triangle is: %.2f",area);
        break;
          case 3:
        scanf("%d",&side);
        area=side*side;
        printf("The area of the square is: %.2f",area);
        break;
    }
}

/*
UserIdPassword

Write a C program to accept a user ID of 1001 and a password of 1010. Prompt the user to enter their ID. If the ID is valid, ask the user to enter their password. If the password is correct, display the name of the user. Otherwise, display "Incorrect Password". If the ID does not exist, display "Incorrect ID".

Develop this program using a switch-case statement.

Sample-run :-
-------------

Test-Case-1 (Valid)
-------------------
Input :-
---------
User ID: 1001
Password: 1010
Expected Output: Display the user’s name (e.g., "User: John Doe").

Test-Case-2 (Invalid Password)
------------------------------
Input :-
--------
User ID: 1001
Password: 2020
Expected Output: "Incorrect Password"

Test-Case-3 (Invalid ID)
-------------------------
Input :-
--------
User ID: 2000
Expected Output: "Incorrect ID"

Test-Case-4 (Empty Input for ID)
--------------------------------
Input :-
--------
User ID: (no input)
Expected Output: "Incorrect ID"

Sample Input
1001
1010
Sample Output
Login Successfully Welcome Aniket
*/
#include<stdio.h>
int main()
{
    int id,pass;
    scanf("%d%d",&id,&pass);
    switch(id==1001)
    {
        case 1:
         switch(pass==1010)
         {
            case 1:
            printf("User: John Doe");
            break;
            case 0:
            printf("Incorrect Password");
            break;
         }
         break;
         case 0:
         printf("Incorrect ID");
         break;
        
        
    }
}



				                                                                  07_03_2025									


	/*
using while loop

Prints odd Numbers
[Title:- Print Odd Numbers up to N]
-----------------------------------
Write a C program that takes an integer input N from the user and prints all odd numbers up to N using a while (true) loop. Ensure the program terminates if the user enters a negative value for N.

Test Cases :-
-------------

Test-Case-1 :-
--------------
Input :- N = 10
--------
Output :- 1 3 5 7 9
---------
Explanation :- Prints all odd numbers from 1 to 10.
--------------

Test-Case-2 :-
--------------
Input :- N = -1
--------
Output :- Invalid input. Program terminated.
---------
Explanation :- Negative value entered; program exits.
--------------

Test-Case-3 :-
--------------
Input: N = 15
Output: 1 3 5 7 9 11 13 15
Explanation: Prints all odd numbers from 1 to 15.
Sample Input
15
Sample Output
1 3 5 7 9 11 13 15
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
    int num;
    int i=1;
    scanf("%d",&num);
    if(num>0)
    {
        printf("Odd numbers up to %d:",num);
    while(num>0)
    {
        
        if(i%2!=0)
        {
            printf(" %d",i);
            
           
        }
        i++;
        num--;
        
    }
    }
    else
    {
        printf("Invalid input. Program terminated.");
    }
}

/*
Print Even Numbers
[Title:- Print Even Numbers up to N]
-------------------------------------
Write a C program that takes an integer input N from the user and prints all even numbers up to N using a while (true) loop. The program should validate the input and terminate if the user enters zero or a negative value.

Test Cases :-
-------------

Test-Case-1 :-
--------------
Input: N = 8
Output: 2 4 6 8
Explanation: Prints all even numbers from 2 to 8.

Test-Case-2 :-
---------------
Input: N = 0
Output: Invalid input. Program terminated.
Explanation: Input is zero; program exits.

Test-Case-3 :-
--------------
Input: N = -5
Output: Invalid input. Program terminated.
Explanation: Negative value entered; program exits.
Sample Input
8
Sample Output
2 4 6 8
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
    int num;
    int i=1;
    scanf("%d",&num);
    if(num>0)
    {
        printf("Even numbers up to %d are:",num);
    while(num>0)
    {
        
        if(i%2==0)
        {
            printf(" %d",i);
            
           
        }
        i++;
        num--;
        
    }
    }
    else
    {
        printf("Invalid input.");
    }
}

/*

EvenAndOddSum
Write a C program that reads a positive integer N from the user and calculates the sum of even and odd numbers between 1 and N using a while loop. 
The program should then print the sum of even numbers and the sum of odd numbers.

NOTE : If user entered negative input then print "Invalid Input" message.


Example_1 :

Sample input  : N = -10;

Sample output : Invalid Input
Sample Input
10
Sample Output
Even Sum = 30
Odd Sum = 25
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
    int num,even,odd;
    scanf("%d",&num);
    if(num>0){
    while(num>0)
    {
        if(num%2==0)
        {
            even=even+num;

        }
        else
        {
            odd=odd+num;
        }
        num--;
    }
    printf("Even sum = %d\n",even);
    printf("Odd sum = %d",odd);
    return 0;
    }
    printf("Invalid Input");

}


/*




SumOfEvenNumbers
Find the Sum of Even Numbers Between Two Given Numbers

Test Case 1 :-  Valid Input (Start and End are Even)
---------------
Input :-
---------
Enter the start number: 2
Enter the end number: 8

Expected Output :-
------------------
Sum of even numbers: 20

Explanation :- The even numbers between 2 and 8 are 2, 4, 6, and 8. The sum is 2 + 4 + 6 + 8 = 20.
---------------

Test Case 2 :- Invalid Input (Start Greater Than End)
--------------
Input :-
--------
Enter the start number: 10
Enter the end number: 5

Expected Output :- 
-------------------
Invalid range. Start number should be less than or equal to end number.

Test Case 3 :-  Valid Input (No Even Numbers Between the Range)
---------------
Input :-
---------
Enter the start number: 9
Enter the end number: 9

Expected Output :-
-------------------
Sum of even numbers: 0
Explanation: There are no even numbers between 9 and 9.

Test Case 4 :- Valid Input (Single Even Number)
--------------
Input :-
---------
Enter the start number: 4
Enter the end number: 4

Expected Output:
----------------
Sum of even numbers: 4

Sample Input
2
8
Sample Output
Sum of even numbers: 20
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
    int num1,num2,sum=0;
    scanf("%d%d",&num1,&num2);
    if((num1%2==0&&num2%2==0))
    {
        while(num1<=num2)
        {
           sum=sum+num1;
           num1=num1+2;
        }
        printf("Sum of even numbers: %d",sum);
    }
     else if(num1==num2)
    {
        printf("Sum of even numbers: %d",sum);

    }
    else if(num1+1<=num2)
    {
        while(num1+1<=num2)
        {
           sum=sum+num1+1;
           num1=num1+2;
        }
        printf("Sum of even numbers: %d",sum);

    }
   
   
    else
    {
    printf("Invalid range. Start number should be less than or equal to end number.");
    }
}



#include <stdio.h>

int main() {
    int start, end;
   
    scanf("%d%d", &start,&end);
    
    if (start > end) {
        printf("Invalid range. Start number should be less than or equal to end number.\n");
        return 0;
    }
    
    int sum_even = 0;
    int num = start;
    while (num <= end) {
        if (num % 2 == 0) {
            sum_even += num;
        }
        num++;
    }
    
    printf("Sum of even numbers: %d\n", sum_even);
    
    return 0;
}



#include <stdio.h>

int main() {
    int start, end;
   
    scanf("%d%d", &start,&end);
    
    if (start > end) {
        printf("Invalid range. Start number should be less than or equal to end number.\n");
        return 0;
    }
    
    int sum_even = 0;
    
    while (start <= end) {
        if (start % 2 == 0) {
            sum_even += start;
        }
        start++;
    }
    
    printf("Sum of even numbers: %d\n", sum_even);
    
    return 0;
}


/*

Program Questions
ReverseNumber
Write C program to reverse a number using while 

Sample input  : Enter a number : 12345
Sample output : Reverse : 54321
Sample Input
123
Sample Output
321
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
    int num,rem,rev=0;
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("Reverse: %d",rev);
}												  
