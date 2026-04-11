1.  round of the number to its next multiplcation of 10
    input as 35
    output as 40 

2   round of the number to its previous multiplcation of the 10
    input as 35
    output as 30

#include <stdio.h>

int main()
{
    int a=35;
    int b=34;
    int next_multi=((((a/10)+1))*10);
     int prev_mult=(((b/10))*10);
    printf("%d",next_multi);
    printf("%d",prev_mult);

    return 0;
}

3   wra c programe to sum of the two number without using + operators
    input as a=5, b=6
    output as 11

#include <stdio.h>
int main()
{
  int a=5,b=6,sum=0;
  sum=a-(-b);
  printf("%d",sum);
}


4   wra c program to sum of the number 
    input as 45
    output as 9

#include <stdio.h>

int main()
{
  int num=45;

  sum=num%10+num/10;
  printf("%d",sum);
  
}

5   swap two number by using third variable
    input
    a=5;
    b=6
    output
    a=6;
    b=5;

#include <stdio.h>
int main()
{
  int a=5,b=6;
 
  int temp;
  temp=a;
  a=b;
  b=temp;
  printf("%d%d",a,b);
}




================================================================================================
Ques:1
------------
Write a C program to reverse the given 2 digit number and print it.
Note : [Don't take the number which ends with zero [0] ]

Input as : 
num = 34
Output as :
The number is 34
Reverse is 43

Input as : 
The number is 25
Reverse is 52

int main()
{
   int num=34;
    printf("%d%d",num%10,num/10);
    return 0;
}

Ques:2
------------
Write a C program to print the middle digit of a given 3 digit number.
Input as : 
num = 345
Output as : 
The number is 345
Middle digit is 4

Input as : 
num = 132
Output as : 
The number is 132
Middle digit is 3

#include <stdio.h>

int main()
{
   int num=345;
   int middle=((num/10)%10);
   printf("%d",middle);
    return 0;
}

Ques:3
------------
Write a C program to Convert Temperature From Celsius to Fahrenheit.
Formula: F = (C × 9/5) + 32

Input as : 
Celsius = 0
Output as :
Temperature in Celsius: 0
Temperature in Fahrenheit: 32

Input as : 
Celsius = 25
Output as :
Temperature in Celsius: 0
Temperature in Fahrenheit: 77

#include <stdio.h>

int main()
{
   int celsius,f;
   printf("enter celsius \n");
   scanf("%d",&celsius);
   f=(celsius*9/5)+32;
   printf("tempreture in celsius: %d\n",celsius);
   printf("tempreture in ferenheit: %d",f);
    return 0;
}

Ques:4
------------
TV Shopping Invoice Calculation
A TV shopping store offers products with taxes, VAT, and discounts. Write a C program that prints the invoice bill in the given format.

Purchase amount = 3000
Calculates the following:
Tax (10%) → tax = purchaseAmount × 0.10
VAT (12%) → vat = purchaseAmount × 0.12
Discount : 5% of purchaseAmount

Total Amount to pay using:
Total = Purchase Amount + Tax + VAT - Discount.

For the above input the Output is :
********** TV Shopping Invoice **********
Purchase Amount  : Rs.3000.00
Tax (10%)        : Rs.300.00
VAT (12%)        : Rs.360.00
Discount         :  Rs.150.00
--------------------------------------
Total Amount     : Rs.3510.00
****************************************


#include <stdio.h>

int main()
{
   int purchase_amount;
   printf("enter the purchase_amount");
   scanf("%d",&purchase_amount);
   int tax=purchase_amount*0.10;
   int vat=purchase_amount*0.12;
   int discount=purchase_amount*0.05;
   int total_amount=(purchase_amount+tax+vat)-discount;
   printf("total amount is =%d",total_amount);
    return 0;
}

Ques:5
------------
Write a C program to evaluate the following polynomial expression:
			(4x^4+7x^3+21x^2-65x+3)
for a given value of x is 3.
[Note : Consider x^4 means x power 4.]

Output is: The result of the polynomial for x = 3 is: 324


#include <stdio.h>
#include<math.h>

int main()
{
   
   int x=3;
   
   int pexp=((4*pow(x,4))+(7*pow(x,3))+(21*pow(x,2))-(65*x)+3);
   printf("%d",pexp);
    return 0;
}


==================================================================================================
   [Without using ternary and if else]
Question - 4
----------------------
Write a C program to find the max number from given 3 numbers .
Input as : 
10 20 30
Output as : The max number is 30

Input as : 
10 40 30
Output as : The max number is 40

Input as : 
20 20 20
Output as : All are equal.

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    (a>b&&a>c)&&printf("a is greater")||(b>a&&b>c)&&printf("b is greater")||printf("c is greater");
    return 0;
}

Question - 5
----------------------
Write a C program to the number is even or Odd.
Input as : 
8
Output as : Even

Input as : 
7
Output as : Odd

#include <stdio.h>

int main()
{
    int num;
    printf("enter any number \n");
    scanf("%d",&num);
    (num%2==0)&&printf("even number")||printf("odd number");
    return 0;
}

Question - 6
---------------------
Write a C program to print the character is upper case or lowercase character.
Input as : 
A
Output as : A is an Upper case character.

Input as : 
a
Output as : a is a Lower case character.

#include <stdio.h>
int main()
{
    char ch;
    printf("enter any chracter \n");
    scanf("%c",&ch);
    (ch>='A'&&ch<='Z')&&printf("%c is an upper case charcter",ch)||(ch>='a'&&ch<='z')&&printf("%c is a lower case",ch)||printf("you enter invalid charcter");
    return 0;
}




================================================================================================
  Ques - 1
----------------
You are tasked with creating a C program to calculate the profit and loss for a given transaction using the following formulas. Take the cost price and selling price from the user by using scanf().

Profit (P) = Selling Price (SP) - Cost Price (CP)
Loss (L) = Cost Price (CP) - Selling Price (SP)
Profit Percentage (PP) = (Profit / Cost Price) * 100
Loss Percentage (LP) = (Loss / Cost Price) * 100
Write a C program that prompts the user for the Cost Price (CP) and the Selling Price (SP) of an item. Calculate and display the profit or loss, as well as the corresponding profit percentage or loss percentage based on the provided formulas.

Your program should:

Prompt the user to enter the Cost Price (CP) and Selling Price (SP) as input.

Calculate the profit (P) or loss (L) based on the given formulas.

Calculate the profit percentage (PP) or loss percentage (LP) based on the given formulas.

Display the calculated profit or loss, as well as the profit percentage or loss percentage.

Your output should be formatted as follows:

Cost Price: [CP]
Selling Price: [SP]
Profit/Loss: [P/L]
Profit Percentage: [PP]%
Loss Percentage: [LP]%


Sample Output :
--------------------
Cost Price: 1500
Selling Price: 1800
Profit/Loss: [calculatedProfitOrLoss]
Profit Percentage: [calculatedProfitPercentage]%
Loss Percentage: [calculatedLossPercentage]%


Ques - 2
--------------------

Develop below scenario program and take all the input from the user by using scanf.

Title: "Tasty Treats Cafe: Bill Calculator"

Introduction:
Welcome to Tasty Treats Cafe! We provide a delightful selection of beverages and snacks to satisfy your cravings. Today, you are our esteemed customer, and we are eager to serve you! Let's calculate your bill based on your preferences.

Question:
How many cups of tea, cups of coffee, and biscuits would you like to order?

Instructions:

Each cup of tea costs ₹15, each cup of coffee costs ₹25, and each biscuit costs ₹10.
Please provide the quantity for each item you wish to order.
Example:
Customer: "I'd like to have 2 cups of tea, 1 cup of coffee, and 3 biscuits, please."

Bill Calculation:

2 cups of tea × ₹15 = ₹30
1 cup of coffee × ₹25 = ₹25
3 biscuits × ₹10 = ₹30
Total Bill:
₹30 (Tea) + ₹25 (Coffee) + ₹30 (Biscuits) = ₹85

Input as :
-------------
Welcome to Tasty Treats Cafe!
How many cups of tea would you like to order? : 2
How many cups of coffee would you like to order? : 1
How many biscuits would you like to order? : 3

Output as :
-----------------
2 cups of tea
1 cup of coffee
3 biscuits
Total Bill Amount: ₹85
Thank you for choosing Tasty Treats Cafe! Please let us know your order, and we will be more than happy to serve you.


Ques - 3
-----------------
Write a program that takes the total bill amount and the number of people from the user. Calculate and print the amount each person needs to pay, assuming an equal split of the bill.

Input :
-------
total bill( in float) ->1200.00
number of people(in int)-> 5

Output :
--------
amount each person needs to pay ->240


Ques - 4
-----------------
Create a program that takes the principal amount, interest rate, and time in years from the user and calculates the simple interest. Print the result with appropriate messages.
Simple Interest = Principal * Rate * Time​ / 100

Input :
-------
principal amount: 4000

interest rate (in percentage): 5

time in years: 3

Output :
--------
Simple Interest is: 600.00
===============================================================================================
[Use Ternary operator to complete all programs]

Que 1 :
========

Write a C program using the ternary operator to calculate the electricity bill for a given number of units consumed by a customer.
For the first 100 units, the rate is Rs. 3.00 per unit.
For any additional units beyond 100, the rate is Rs. 4.50 per unit.

Example 1: Units consumed less than or equal to 100
Sample Input: units consumed : 75
Sample Output: The total electricity bill is: Rs. 225.00
        
Example 2: Units consumed more than 100
Sample Input: units consumed: 150
Sample Output: The total electricity bill is: Rs. 525.00
        
Example 3: Units consumed exactly 0
Sample Input: units consumed: 0
Sample Output: The total electricity bill is: Rs. 0.00

Ques  2 :
==========
Develop a program on a payroll system for a company. The system needs to calculate the salary of an employee based on their employee type ('M' for manager or 'H' for HR employee) and their basic salary. 
For managers, their salary should be increased by 10% as a performance bonus and for HR  increased by 5% . Write a C program that takes the employee type and basic salary as inputs and calculates the increased salary using the ternary operator.


Ques  3 :
==========

Write a C program to find the second largest of three numbers using only the ternary operator.
The program should take three numbers as input.
Use a nested ternary expression to determine the second largest.

Expected Input and Output: 
Test case 1:
Enter three numbers: 10 25 15
Second largest number: 15

Test case 2:
Enter three numbers: 30 20 10
Second largest number: 20

Test case 3:
Enter three numbers: 5 50 25
Second largest number: 25

Ques  4 :
==========

Write a C program that takes a number (1-7) as input, where:
1 = Monday, 2 = Tuesday, ..., 7 = Sunday
The program should output "Weekend" for Saturday (6) and Sunday (7), otherwise output "Weekday".
Use only the ternary operator to determine the result.

Input as : 
Enter a number (1-7) representing the day of the week: 5  
Day Type: Weekday  

Enter a number (1-7) representing the day of the week: 6  
Day Type: Weekend  


=================================================================================================================================================================================
  Q. Write a C program that prints numbers from 1 to 10 using only goto and lable and if.
Q. Write a C program to print all even numbers from 2 to 20 using only goto and a label an if .
Q. Write a C program to print the first 10 multiples of a given number using only goto and a label and if. Do not use loops.
Input as :
Enter a number : 5
Output as: 5 10 15 20 25 30 35 40 45 50


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

==================================================================================================
  Question : 1
----------------------
Write a C program that takes 2 number as input and store that number in a variable, First input for radius of a Circle and 2nd input for side of a Square. Then calculate the area of Circle and Square and display it.
Area of circle : πr^2 [π = 3.14159 , r is the radius]
Area of square : a^2 [ a is side of the square]

Input as :
Enter radius of Circle : 12
Enter side of Square : 5

Output as :
Area of Circle is : 452.16
Area of Square is : 25

int main()
{
    float const pi=3.14;
    int rad,side;
    printf("enter the radius of the circle \n");
    scanf("%d",&rad);
    printf("enter the side of a square \n");
    scanf("%d",&side);
    int circle=(pi*rad*rad);
    int square=(side*side);
    printf("%d\n",circle);
    printf("%d",square);

    return 0;
}

Question : 2
--------------------
Write a program in C that takes number of days as an input. Find and display number of years, months and days.
Input : 520
1 years, 5 months, 5 days


#include <stdio.h>

int main()
{
    int days,year,month;
    printf("enter any number");
    scanf("%d",&days);
    year=days/365;
    days=days%365;
    month=days/30;
    days=days%30;
    printf("%d year, %d months,%d days",year,month,days);

    return 0;
}
        
Question : 3
-----------------------
Write a program that takes two numbers as input and uses the ternary operator to check if the first number is divisible by the second number. Display an appropriate message accordingly.

Input as :
Enter two Number : 10 5

Output as :
10 is Divisible by 5.

#include <stdio.h>

int main()
{
    int num1,num2;
    printf("enter two number \n");
    scanf("%d%d",&num1,&num2);
    (num1%num2==0)?printf(" %d is divisible %d",num1,num2):printf("is not divisible");
    return 0;
}

Question - 4
-----------------------
Write a c program to find the next multiple of 10 of a given two digit number, if the given number's last digit is less than 5 then 
find the previous multiple of 10 and if the given number's last digit is greater than or equal to 5 then find the next multiple of 10.
[Don't use if else]
1. Solve it without using ternary operator[? :]
2. Solve it by using Logical Operators[&& , ||].
3. Solve it without using ternary operator and Logical operator.


MCQ
----------
Q1. 
void main() {
printf("%d ", 2 + 3 * 4 + 5 == 45);
printf("%d ", 2 + 3 * 4 + 5 == 19);
printf("%d ", (2 + 3) * (4 + 5) == 45);
}



a) 1 0 1
b) 1 1 0
c) 0 0 1
d) 0 1 1
e) None
e

Q2. 
What will be the output of the following C code?

void main() {
int a = 1, b = 4, c = 10;
c = a = 10 == b + 6;
printf(“a=%d, b=%d, c=%d”, a, b, c);
}

a) a=10, b=4, c=1
b) a=1, b=4, c=0
c) a=0, b=10, c=1
d) Compiler Error
e) a=1, b=4, c=1

e

Q3.
void main() {
printf(“%d “, 5 && 3);
printf(“%d “, 0 || -3);
}


a) 0 0
b) 1 1
c) 1 0
d) 0 1
e) 0 2

0 1

Q4.
What will be the output ?
float a = 5/2;
float b = 5/2.0;
float c = 5.0/2;
float d = 5.0/2.0;

2.000000
2.500000
2.500000
2.500000



a) a=2.5, b=2.5, c=2.5, d=2.5
b) a=2, b=2.5, c=2.5, d=2.5
c) a=2.0, b=2.5, c=2.5, d=2.5
d) a=2.0, b=2.0, c=2.5, d=2.0
e) None
c)

Q5.
What will be the output of the following C code?

#include <stdio.h>
void main()
{
    int x = 1, y = 0, z = 5;
    int a = x && y && z++;
    printf("%d", z);
}


a) 5
b) 1
c) 0
d) 6

a)


Q6.
#include <stdio.h>

int main() {
    
int a = 5;
int b = 4;
a += b % a;
    printf("%d",a);

    return 0;
}

A. 7
B. 8
C. 9
D. 10
E. 9.0

c

Q7.
Which of the following operator takes only integer operands ?

A.+
B.*
C./
D.%
E.None of these
D
Q8.
In an expression involving || operator ,evaluation

I. Will be stopped if one of its components evaluates to false 
II. Will be stopped if one of its components evalutes to true
III. Takes place from right to left
IV. Takes place from left to right

A.I and II
B.I and III
C.II and III
D.II and IV
E.III and IV

D

Q9.
what is the Output :

void main()
{
 
int i =10;
i=!i>14;
printf("i=%d",i);
}

A.10
B.14
C.0
D.1
E.None of these

Q10.
#include <stdio.h>

int main() {
    int a = 3, b = 4, c = 0;
    int res = !a || !b && !c;
    printf("%d", res);
    return 0;
}
A) 0
B) 1
C) 2
D) Compiler error

Q11.
#include <stdio.h>

int main() {
    char ch = 'D';
    printf("%c", ch && 'Z' ? ch + 3 : ch - 2);
    return 0;
}
A) G
B) A
C) D
D) Z


Q12.
#include <stdio.h>

int main() {
    char ch1 = 127;
    printf("%d",ch1);
    
    char ch2 = 130;
    printf(" %d",ch2);
    return 0;
}

a. 127  -126
b. 127  130
c. garbage garbage
d. Error

Q13.
#include <stdio.h>

int main() {
    printf("%d", printf("%d", printf("Hello")) );
    return 0;
}
A) Hello32
B) Hello21
C) Hello52
D) Compilation Error

Q14.
What will be the output for the given code  printf("\n The number is %07d",1212);
a) The number is 0001212
b) The number is 1212
c) The number is 00000001212
d) The number is 1212000

Q15. 
#include <stdio.h>
int main()
{
    int i;
    i = printf("letsfindcourse");
    i = printf("%d ", i);
    printf("%d ", i);
    return 0;
}
A. letsfindcourse 15 3
B. letsfindcourse 14 2
C. letsfindcourse 14 3
D. Compilation Error

Q16. 
What is the output of this program?

#include <stdio.h>
int main()
{
    int i;
    i = 1, 2, 3;     
    printf("%d", i);
    return 0;
}
A. 1
B. 2
C. 3
D. Invalid Syntax

Q17.
What is the output of the following code?

int main()
{
    int k=1;
    printf("%d == 1 is" "%s", k, k==1?"TRUE":"FALSE");
    return 0;
}
A. k == 1 is TRUE
B. 1 == 1 is TRUE
C. 1 == 1 is FALSE
D. K == 1 is FALSE

Q18.
What is the output of this C code?
#include<stdio.h>
int main()
 {
     char c = 'A';
     printf("%d %c", c+32, c+32);
     return 0;
}
65 a
97 a
Error
None of the above

Q19.
#include <stdio.h>
int main() 
{ 
      int k,num=30; 
      k=(num>5?(num<=10?100:200):500); 
      printf("%d %d",num,k); 
      return 0;
}
A. 30,100
B. 200,200
C. 30,200
D. None of the above

Q20.
int main() 
{ 
      int i = 0, j = 1, k = 2, m; 
      m = i++ || j++ || k++; 
      printf("%d %d %d %d", m, i, j, k);
      return 0; 
} 
A. 3 1 2 2
B. 3 1 1 2
C. 1 1 2 2
D. 1 1 2 1






============================================================================================
	 '
Que 1 : 
------------------------
Write a 'C' program to take the marks of a student in 5 subjects as input and determine how many subjects have marks greater than or equal to 35 and how many have marks less than 35. 
The program should not use any control statements (if, else, switch, etc.) or the ternary operator. 

Sample input  : int sub1 = 38, sub2 = 34, sub3 = 35, sub4 = 78, sub5 = 20

Sample Output : Pass in 3 subject and fail in 2 subject.  



int main()
{
    int s1, s2, s3,s4,s5;
    int pass = 0, fail = 0;
    printf("Enter 5 subject mark : ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    /*
    s1>=35 && ++pass || fail++;
    s2>=35 && ++pass || fail++;
    s3>=35 && ++pass || fail++;
    s4>=35 && ++pass || fail++;
    s5>=35 && ++pass || fail++;
    
    */
    pass = (s1>=35) + (s2>=35) +(s3>=35)+(s4>=35)+(s5>=35);
    fail = 5 - pass;
    printf("Pass =  %d , Fail = %d",pass,fail);
    
    
    
    

    return 0;
}
       
========================================================================================================     
Que 2 :
------------------------
 Write a 'C' program to take the number of seconds and convert into (H:M:S)
Sample input  : int seconds = 3665

Sample Output : 1 hour 1 minute and 5 second

#include <stdio.h>

int main()
{
   int sec , hr, min;
   scanf("%d",&sec);
   hr = sec/3600;
   min = sec%3600/60;
   sec = sec%3600%60;
   printf("HR %d, MIN %d, SEC %d",hr,min,sec);

    return 0;
}
========================================================================================================     
Ques - 3
------------------------
Using ternary operator write a C program for a bookstore named "BookWorld" that calculates the discounted amount based on the total purchase amount. 
 
The store provides three types of discounts to its customers:
-> If the total purchase amount is less than Rs. 1000, there is no discount.
-> If the total purchase amount is between Rs. 1000 and Rs. 5000 (inclusive), customers get a 5% discount on the total purchase amount.
-> If the total purchase amount is greater than Rs. 5000, customers get a 10% discount on the total purchase amount.

Sample input  : purchase amount = 999
Sample output : total amount = 999

Sample input  : purchase amount = 2000
Sample output : total amount including 5% discount = 1900

Sample input  : purchase amount = 10000
Sample output : total amount including 10% discount = 9000


/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   float pa;
   scanf("%f",&pa);
   ( pa<1000 )? printf("No discount %.2f",pa) : 
             (pa>=1000 && pa<5000) ?
              printf("5%c discount and price is %.2f",'%',pa - pa*0.05) : 
            printf("10%c discount and price is %.2f",'%',pa - pa*0.1);
    
    return 0;
}
======================================================================================================== 

Que 4 : 
------------------------
You are developing a program for an online bus ticket booking platform called "BusTicketBooker." 
The platform offers tickets for a fixed price of Rs. 300 per seat. However, there are discounts available for senior citizens.      
If a passenger's age is between 60 and 100 (inclusive), they will receive a 20% discount on the total booking cost.

Write a C program for "BusTicketBooker" that takes the number of tickets and the age of the passenger as inputs and calculates the total booking cost after applying any applicable discount using the ternary operator. 
The program should then display the bill with a suitable message, including the total cost and the discount amount (if applicable).
Your task is to implement the program logic inside the main function by using only Ternary Operator.

Example 1: Passenger is not a senior citizen
Sample Input: 
              number of tickets: 3
              age of the passenger: 45

Sample Output:
              Total cost before discount: Rs. 900.00
              Discount amount: Rs. 0.00
              Total cost after discount: Rs. 900.00


Example 2: Passenger is a senior citizen
Sample Input:
              number of tickets: 2
              age of the passenger: 65

Sample Output:
              Total cost before discount: Rs. 600.00
              Discount amount: Rs. 120.00
             Total cost after discount: Rs. 480.00

 MCQ
--------------
Q1.
 What will be the output of bellow code?

#include <stdio.h>
int main() {
    int x = 5, y = 2, z;
    z = x / y * x % y;
    printf("%d\n", z);
    return 0;
}

A) 0
B) 1
C) 2
D) Compilation Error


Q2.
What will be the output for the following C code?

#include <stdio.h>
int main()
{
    int a = 8;
    double b = 2.6;
    int c;
    c = a + b;
    printf("%d", c);
    return 0;
}

A) 10.6
B) 10
C) 11
D) 16


Q3.
What will be the output for the following C code?

#include <stdio.h>
int main()
{
    int x = 4, y = 2;
    x /= x / y;
    printf("%d\n", x);
    return 0;
}

A) 4
B) 2
C) 1
D) 0

Q4.
Consider the following program fragment,and choose the correct one.

#include <stdio.h>
int main()
{
  int a,b=2,c;
  a=2*(b++);
  c=2*(++b);
  printf("a=%d, b=%d, c=%d",a,b,c);
  return 0;
}

A) a=4, b=2, c=6
B) a=2, b=4, c=4
C) a=4, b=4, c=8
D) a=6, b=4, c=8

Q5.
What will be the output of following program ?

  #include <stdio.h>
  void main()
  {   
    int x=(20 || 40 ) && (10);
    printf("x= %d",x);
  }

A) x= 60
B) x= 70
C) x= 0
D) x= 1


Q6.
What will be the output of this below program?

#include<stdio.h>
int main()
{
  int a=3, b=9;
  printf("%d", ++(a*b+1));
  return 0;
}

A) 28
B) 29
C) 30
D) Compilation error


Q7.
What will be the output of this below program?

#include<stdio.h>
int main() {
int a = 5;
int b = 4;
a += b % a;
printf("%d",a);
return 0;
}

A) 7
B) 8
C) 9
D) 10
E) 9.0


Q8.
What will be the output of this below program?

#include<stdio.h>
int main() {
printf("%d ", 2 + 3 * 4 + 5 == 45);
printf("%d ", 2 + 3 * 4 + 5 == 19);
printf("%d ", (2 + 3) * (4 + 5) == 45);
return 0;
}

A) 1 0 1
B) 1 1 0
C) 0 0 1
D) 0 1 1
E) None


Q9.
What will be the output of this below program?

#include<stdio.h>
int main() {
int a = 1, b = 4, c = 10;
c = a = 10 == b + 6;
printf("a=%d, b=%d, c=%d", a, b, c);
return 0;
}


A) a=10, b=4, c=1
B) a=1, b=4, c=0
C) a=0, b=10, c=1
D) Compiler Error
E) a=1, b=4, c=1

Q10.
What will be the output of this below program?

#include<stdio.h>
int main() {
int x = 15;
int y = 2;
int z = x / y + x % y;
printf("z = %d\n", z);
return 0;
}

A) z = 7
B) z = 8
C) z = 9
D) z = 14
E) z = 15

======================================================================================
	Que 1 : 
------------------------
Write a 'C' program to take the marks of a student in 5 subjects as input and determine how many subjects have marks greater than or equal to 35 and how many have marks less than 35. 
The program should not use any control statements (if, else, switch, etc.) or the ternary operator. 

Sample input  : int sub1 = 38, sub2 = 34, sub3 = 35, sub4 = 78, sub5 = 20

Sample Output : Pass in 3 subject and fail in 2 subject.  
       
========================================================================================================     
Que 2 :
------------------------
 Write a 'C' program to take the number of seconds and convert into (H:M:S)
Sample input  : int seconds = 3665

Sample Output : 1 hour 1 minute and 5 second
========================================================================================================     
Ques - 3
------------------------
Using ternary operator write a C program for a bookstore named "BookWorld" that calculates the discounted amount based on the total purchase amount. 
 
The store provides three types of discounts to its customers:
-> If the total purchase amount is less than Rs. 1000, there is no discount.
-> If the total purchase amount is between Rs. 1000 and Rs. 5000 (inclusive), customers get a 5% discount on the total purchase amount.
-> If the total purchase amount is greater than Rs. 5000, customers get a 10% discount on the total purchase amount.

Sample input  : purchase amount = 999
Sample output : total amount = 999

Sample input  : purchase amount = 2000
Sample output : total amount including 5% discount = 1900

Sample input  : purchase amount = 10000
Sample output : total amount including 10% discount = 9000
======================================================================================================== 

Que 4 : 
------------------------
You are developing a program for an online bus ticket booking platform called "BusTicketBooker." 
The platform offers tickets for a fixed price of Rs. 300 per seat. However, there are discounts available for senior citizens.      
If a passenger's age is between 60 and 100 (inclusive), they will receive a 20% discount on the total booking cost.

Write a C program for "BusTicketBooker" that takes the number of tickets and the age of the passenger as inputs and calculates the total booking cost after applying any applicable discount using the ternary operator. 
The program should then display the bill with a suitable message, including the total cost and the discount amount (if applicable).
Your task is to implement the program logic inside the main function by using only Ternary Operator.

Example 1: Passenger is not a senior citizen
Sample Input: 
              number of tickets: 3
              age of the passenger: 45

Sample Output:
              Total cost before discount: Rs. 900.00
              Discount amount: Rs. 0.00
              Total cost after discount: Rs. 900.00


Example 2: Passenger is a senior citizen
Sample Input:
              number of tickets: 2
              age of the passenger: 65

Sample Output:
              Total cost before discount: Rs. 600.00
              Discount amount: Rs. 120.00
             Total cost after discount: Rs. 480.00

 MCQ
--------------
Q1.
 What will be the output of bellow code?

#include <stdio.h>
int main() {
    int x = 5, y = 2, z;
    z = x / y * x % y;
    printf("%d\n", z);
    return 0;
}

A) 0
B) 1
C) 2
D) Compilation Error


Q2.
What will be the output for the following C code?

#include <stdio.h>
int main()
{
    int a = 8;
    double b = 2.6;
    int c;
    c = a + b;
    printf("%d", c);
    return 0;
}

A) 10.6
B) 10
C) 11
D) 16


Q3.
What will be the output for the following C code?

#include <stdio.h>
int main()
{
    int x = 4, y = 2;
    x /= x / y;
    printf("%d\n", x);
    return 0;
}

A) 4
B) 2
C) 1
D) 0

Q4.
Consider the following program fragment,and choose the correct one.

#include <stdio.h>
int main()
{
  int a,b=2,c;
  a=2*(b++);
  c=2*(++b);
  printf("a=%d, b=%d, c=%d",a,b,c);
  return 0;
}

A) a=4, b=2, c=6
B) a=2, b=4, c=4
C) a=4, b=4, c=8
D) a=6, b=4, c=8

Q5.
What will be the output of following program ?

  #include <stdio.h>
  void main()
  {   
    int x=(20 || 40 ) && (10);
    printf("x= %d",x);
  }

A) x= 60
B) x= 70
C) x= 0
D) x= 1


Q6.
What will be the output of this below program?

#include<stdio.h>
int main()
{
  int a=3, b=9;
  printf("%d", ++(a*b+1));
  return 0;
}

A) 28
B) 29
C) 30
D) Compilation error


Q7.
What will be the output of this below program?

#include<stdio.h>
int main() {
int a = 5;
int b = 4;
a += b % a;
printf("%d",a);
return 0;
}

A) 7
B) 8
C) 9
D) 10
E) 9.0


Q8.
What will be the output of this below program?

#include<stdio.h>
int main() {
printf("%d ", 2 + 3 * 4 + 5 == 45);
printf("%d ", 2 + 3 * 4 + 5 == 19);
printf("%d ", (2 + 3) * (4 + 5) == 45);
return 0;
}

A) 1 0 1
B) 1 1 0
C) 0 0 1
D) 0 1 1
E) None


Q9.
What will be the output of this below program?

#include<stdio.h>
int main() {
int a = 1, b = 4, c = 10;
c = a = 10 == b + 6;
printf("a=%d, b=%d, c=%d", a, b, c);
return 0;
}


A) a=10, b=4, c=1
B) a=1, b=4, c=0
C) a=0, b=10, c=1
D) Compiler Error
E) a=1, b=4, c=1

Q10.
What will be the output of this below program?

#include<stdio.h>
int main() {
int x = 15;
int y = 2;
int z = x / y + x % y;
printf("z = %d\n", z);
return 0;
}

A) z = 7
B) z = 8
C) z = 9
D) z = 14
E) z = 15



===============================================================================================
	
Q. Write a C program that prints numbers from 1 to 10 using only goto and lable and if.
Q. Write a C program to print all even numbers from 2 to 20 using only goto and a label an if .
Q. Write a C program to print the first 10 multiples of a given number using only goto and a label and if. Do not use loops.
Input as :
Enter a number : 5
Output as: 5 10 15 20 25 30 35 40 45 50


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

	


  
