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
  


  
