Basic coding                                      Day-1
============================================================

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


============================================================
						Day-2
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

answer:-
======
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

#include <stdio.h>

int main()
{
   int n = 45;
   int rev = (n%10)*10 + (n/10);
          //    3 * 10 +  2 = 32
   printf("The number is : %d\n",n);
     printf("The reverse number is : %d\n",rev);

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
   int n = 560;
   int mid = (n/10)%10;
         
   printf("The number is : %d\n",n);
     printf("The mid number is : %d\n",mid);

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
   float cel = 0;
   float fah = (cel * ( 9.0/5.0)) + 32;
         
   printf("The Cel is : %.2f\n",cel);
     printf("The far is : %.2f\n",fah);

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
Discount         :  Rs.60.00
--------------------------------------
Total Amount     : Rs.3600.00
****************************************


#include <stdio.h>

int main()
{
   float pa = 3000;
   float tax = pa*0.10;
   float vat = pa* 0.12;
   float dis = pa*0.05;
   
   float total = pa+tax+vat - dis;
         
   printf("For the above input the Output is :\n");
   printf("********** TV Shopping Invoice **********\n");
   printf("Purchase Amount  : Rs. %.2f\n",pa);
 printf("Tax (10%)        : Rs.%.2f\n",tax);
 printf("VAT (12%)        : Rs.%.2f\n",vat);
 printf("Discount         :  Rs.%.2f\n",dis);
 printf("--------------------------------------\n");
 printf("Total Amount     : Rs.%.2f\n",total);
 printf("****************************************");

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

int main()
{
    //(4x^4+7x^3+21x^2-65x+3)
    int x = 3;
    int res = 4*(x*x*x*x) + 7 *(x*x*x) + 21 * (x*x) - 65 * x + 3;
    printf("Res is : %d",res);
    return 0;
}

MCQ:-
======

1) What will be the output of bellow code?

#include <stdio.h>
int main() {
    int a = 5, b = 3, c = 1;
    int result = a * (b + c++) / (--b);
    printf("%d\n", result);
    return 0;
}
Ans:
==================================================
2) What will be the output of bellow code?

#include <stdio.h>
int main() {
    int x = 5, y = 2, z;
    z = x / y * x % y;
    printf("%d\n", z);
    return 0;
}
Ans:
==================================================
3) What is the output of the following code?

#include <stdio.h>
int main() {
    int a = 5, b = 5, c = 5;
    int x, y;

    x = ++a * 2 - 1;
    y = b++ * 2 - 1;
    c *= 2 - 1;

    printf("%d %d %d\n", x, y, c);
    return 0;
}
Ans:
==================================================
4) What will be the output for the following C code?

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
Ans:
==================================================
5) What will be the output for the following C code?

#include <stdio.h>
int main()
{
    int x = 4, y = 2;
    x /= x / y;
    printf("%d\n", x);
    return 0;
}
Ans:
==================================================
6) Consider the following program fragment,and choose the correct one.

#include <stdio.h>
int main()
{
  int a,b=2,c;
  a=2*(b++);
  c=2*(++b);
  printf("a=%d, b=%d, c=%d",a,b,c);
  return 0;
}
Ans:
==================================================
7) What will be the output of following program ?

  #include <stdio.h>
  void main()
  {   
    int x=(20 || 40 ) && (10);
    printf("x= %d",x);
  }
Ans:
==================================================
8) What will be the output of bellow code?

#include<stdio.h>
  void main() {
  int i = 0, j = 1, k = 2, m;
  m = i++ || j++ || k++;
  printf("%d %d %d %d", m, i, j, k);
  return 0;
  } 
Ans:
==================================================
9) What will be the output of this below program?

#include<stdio.h>
int main()
{
  int a=3, b=9;
  printf("%d", ++(a*b+1));
  return 0;
}
Ans:
==================================================
10) What will be the output of this below program?

#include<stdio.h>
int main() {
int a = 5;
int b = 4;
a += b % a;
printf("%d",a);
return 0;
}
Ans:
==================================================
11) What will be the output of this below program?

#include<stdio.h>
int main() {
int a = 5;
int b = 10;
int c = 15;
int d = 2;   
int result = a++ * ++b - c-- / d++;
printf("%d %d %d %d",a,b,c,result);
return 0;
}
Ans:
==================================================
12) What will be the output of this below program?

#include<stdio.h>
int main() {
int x = 3;
int y = 2;
int z = x++ * x * --y - y--;
printf("%d %d %d",x,y,z); 
return 0;
}
Ans:
==================================================
13) Which of the following operator takes only integer operands?

A) +
B) *
C) /
D) %
E) None of these
Ans:
==================================================
14) In an expression involving || operator ,evaluation

I)   Will be stopped if one of its components evaluates to false
II)  Will be stopped if one of its components evalutes to true
III) Takes place from right to left
IV)  Takes place from left to right
Ans:
==================================================
15) What will be the output of this below program?

#include<stdio.h>
int main()
{
int i =10;
i=!i>14;
printf("%d",i);
return 0;
}
Ans:





============================================================
						Day-03
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

MCQ:-
=====

============================================================================





