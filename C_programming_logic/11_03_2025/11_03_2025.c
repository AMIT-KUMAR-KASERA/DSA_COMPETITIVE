/*                                                                                                    11_03_2025

  1.                                                                          
SpyNumber
Write C program to check given number is spy number or not using while loop and user defined function.
-> A spy number is a number where the sum of its digits equals the product of its digits.
For example :
1124 is a spy number, because the sum of its digits is 1+1+2+4=8 and the product of its digits is 1*1*2*4=8 is equal

case 1:
Sample input : 22

Sample Output : Is spy number 

case 2:
Sample input : 1124

Sample Output :  Is spy number

case 3:
Sample input : 123

Sample Output :  Is not spy number
Sample Input
1124
Sample Output
1124 is a Spy Number.
Explanation
Addition of the given number each digits and multiplication of the given number each digits is same then that number called as a spy number

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
    int num,sum=0,pro=1,rem;
    scanf("%d",&num);
    int a=num;
    if(a<0)
    {
        printf("Negative value NOT Allowed");
        return 0;
        }
    while(a!=0)
    {
        rem=a%10;
        sum=sum+rem;
        pro=pro*rem;
        a=a/10;

    }
    if(sum==pro)
    {
        printf("%d is a Spy Number.",num);

    }
    else
    {
        printf("%d is NOT a Spy Number.",num);
    }





    
   
}




#include<stdio.h>
int main()
{
    int num,sum=0,pro=1,rem;
    scanf("%d",&num);
    int a=num;
   if(a>0){
    while(a!=0)
    {
        rem=a%10;
        sum=sum+rem;
        pro=pro*rem;
        a=a/10;

    }
    if(sum==pro)
    {
        printf("%d is a Spy Number.",num);

    }
    else
    {
        printf("%d is NOT a Spy Number.",num);
    }
   }
   else
   {
    printf("Negative value NOT Allowed");
   }
    
   
}


2.

/*
PerfectNumber
Write a C program to check the given number is a perfect number or not?

If a sum of the multiples of the number excluding the given number is same as the original number then we can say that number is a perfect number.

6 multiples are 1,2,3,6 : sum of multiples = 1+2+3 = 6

6 is a perfect number.

input :
	Enter a number : 28
output :
	28 is a perfect number.
Sample Input
28
Sample Output
28 is a perfect number.
Explanation
If the sum of the divisors is equal to the original number, it is a Perfect Number.

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
    int num1,num2,i=1,sum=0;
    scanf("%d",&num1);
     num2=num1;
    if(num2>0)
    {
    while(i<=num2/2)
    {
        if(num2%i==0)
        {
            sum=sum+i;
        }
        i++;

    }
    if(num1==sum)
    {
        printf("%d is a perfect number.",num1);
    }
    else
    {
        printf("%d is NOT a perfect number.",num1);
    }
    }
    else
    printf("Negative value Not Allowed");
}

3.
/*
NeonNumber
Write a C program that takes a number as input from the user and determine whether the number is a neon number or not. Develop it by using while loop.

A Neon number is a number is a number where the sum of digits of square of the number is equal to the number itself.

9 is a Neon number . Its square is 9*9 = 81 and sum of the digits 8+1 = 9 .So both are equal.
Sample Input
9
Sample Output
9 is a Neon number.
Explanation
1) Input: The program takes a number from the user. 2) Square Calculation: Computes the square of the given number. 3) Sum of Digits: Extracts and sums the digits of the square using a while loop. 4)Check Condition: If the sum of digits equals the original number, it is a Neon Number. 5)Output: Prints whether the number is Neon or Not.

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
    int num1,square=0,s=0,rem;
    scanf("%d",&num1);
    square=num1*num1;
    if(num1>0){
    while(square!=0)
    {
        rem=square%10;
        s=s+rem;
        square=square/10;
    }
      if(num1==s)
      {
        printf("%d is a Neon number.",num1);
      }
      else{
        printf("%d is NOT a Neon number.",num1);
      }
    }
    else
    {
        printf("Negative values are Not allowed");
    }
}

4.
/*
PrintTable
Write a C program that takes a number and prints its multiplication table using a while loop.

Sample Input:
	Enter a number: 7
Sample Output:
7 x 1 = 7
7 x 2 = 14
7 x 3 = 21
.
.
.
7 x 9 = 63
7 x 10 = 70
Sample Input
5
Sample Output
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50


Input:
5

Expected Output:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
Output:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50


Input:
4

Expected Output:
4 x 1 = 4
4 x 2 = 8
4 x 3 = 12
4 x 4 = 16
4 x 5 = 20
4 x 6 = 24
4 x 7 = 28
4 x 8 = 32
4 x 9 = 36
4 x 10 = 40
Output:
4 x 1 = 4
4 x 2 = 8
4 x 3 = 12
4 x 4 = 16
4 x 5 = 20
4 x 6 = 24
4 x 7 = 28
4 x 8 = 32
4 x 9 = 36
4 x 10 = 40


Input:
0

Expected Output:
Zero Not allowed
Output:
Zero Not allowed


Input:
-5

Expected Output:
Negative values Not allowed
Output:
Negative values Not allowed


Input:
2

Expected Output:
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20
Output:
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20
*/
#include<stdio.h>
int main()
{
    int num=1,n,mul;
    scanf("%d",&n);
    if(n==0){printf("Zero Not allowed"); return 0;}
    if(n>0){
    while(num<=10)
    {
        mul=num*n;
       printf("%d x %d = %d\n",n,num,mul);
       num++;

    }
    }
    else
    {
      printf("Negative values Not allowed");  
    }

}

5


/*
DigitAppearNumberOfTimes
Write a C program to count how many times a specific digit  appears in a given number . 
The program should use a while loop to iterate through the digits of the number and count how many times the specified digit appears.
-> take two integer from the user first input is number and second input is which you want to search 
->count the user given number how many times occurs in number.

input :
-------
	Enter a number :123451
	Enter a number want to search : 1
output:
	1 occurs 2 times.
Sample Input
1234534 2
Sample Output
2 occurs 1 times.
Explanation
1) number: Main number from which we extract digits. 2) searchDigit: The digit the user wants to find. 3) Extract each digit using modulus (% 10). 4) Compare it with searchDigit. 5) If they match, increase the count. 6) Remove the last digit using division (/ 10). 7) Displays how many times the given digit appears in the number.

Note:
Your code must be able to print the sample output from the provided sample input. However, your code is run against multiple hidden test cases. Therefore, your code must pass these hidden test cases to solve the problem statement.

Limits
Memory Limit: 1 MB

Time Limit: 60 ms

Scoring
Score is assigned if any testcase passes

Allowed Languages
python, c, csharp, java, javascript

#include<stdio.h>
int main()
{
   long int num1;
   int num2,count=0,rem;
    scanf("%ld %d",&num1,&num2);
    while(num1!=0)
    {
        rem=num1%10;
        if(num2==rem)
        {
            count++;
        }
        num1=num1/10;
    }
    printf("%d occurs %d times.",num2,count);
}
*/



													12-02-2025

/*
	Program Questions
PrintFirstNNaturalNumberAndSum
Write a C program to calculate the sum of the first N natural numbers using a for loop.
input :
	Enter a number: 5
output :
	The sum of the first 5 natural numbers is: 15
Sample Input
5
Sample Output
The sum of the first 5 natural numbers is: 15

*/

#include<stdio.h>
int main()
{
    int num,i,sum=0;
    scanf("%d",&num);
    if(num>0){
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("The sum of the first %d natural numbers is: %d",num,sum);
    }
    else
    {
        printf("Negative value not Allowed");
    }
}



/*

PrintDivisors
Write a C program to print all divisors of a given number n using a for loop.
Input:
	Enter a number: 12
Output:
	The divisors of 12 are: 1 2 3 4 6 12
Sample Input
6
Sample Output
The divisors of 6 are: 1 2 3 6
*/
#include<stdio.h>
int main()
{
    int num1,i;
    scanf("%d",&num1);
    if(num1>0)
    {
        printf("The divisors of %d are: ",num1);
    for(i=1;i<=num1;i++)
    {
        if(num1%i==0)
        {
           printf("%d ",i);
        }
       
    }
    }
    else
    {
        printf("Negative value not allowed");
    }

}

/*

GreatestCommonDivisor
Write a C program to find the Greatest Common Divisor (GCD) of two numbers using a for loop.

Input:
	Enter two numbers: 12 18
Output:
	The GCD of 12 and 18 is: 6
Sample Input
12 18
Sample Output
The GCD of 12 and 18 is: 6

*/
#include<stdio.h>
int main()
{
    int num1,num2,i,gcd;
    scanf("%d%d",&num1,&num2);
    if(num1>0&&num2>0)
    {
    for(i=1;i<=num1&&i<=num2;i++)
    {
        if(num1%i==0&&num2%i==0)
        {
            gcd=i;
        }

    }
    printf("The GCD of %d and %d is: %d",num1,num2,gcd);
    }
    else
    {
        printf("Negative value not allowed");
    }

}

/*
PrintNumberUptoGivenN
Write a C program to print all the numbers from 1 to a given number N using a for loop.
input :
	Enter a number: 5
output :
	1 2 3 4 5
Sample Input
5
Sample Output
1 2 3 4 5

*/
#include<stdio.h>
int main()
{
    int num1,i;
    scanf("%d",&num1);
    if(num1>0)
    {
    for(i=1;i<=num1;i++)
    {
        printf("%d ",i);
    }
    }
    else
    {
        printf("Negative value not Allowed");
    }

}


/*

PrintTable
Write a C program to display the multiplication table of a number N using a for loop.
Input:
	Enter a number: 4
Output:
4 x 1 = 4
4 x 2 = 8
4 x 3 = 12
.
.
.
4 x 9 = 36
4 x 10 = 40
Sample Input
2
Sample Output
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20

*/
#include<stdio.h>
int main()
{
    int num1,i;
    scanf("%d",&num1);
    if(num1>0)
    {
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",num1,i,num1*i);
    }
    }
    else
    {
        printf("Negative value not allowed");
    }
}



/*

Ques-1
___________
Write a program in C to display the cube of the number up to an integer.

Test Data :
Input number of terms : 5
Expected Output :
Number is : 1 and cube of the 1 is :1
Number is : 2 and cube of the 2 is :8
Number is : 3 and cube of the 3 is :27
Number is : 4 and cube of the 4 is :64
Number is : 5 and cube of the 5 is :125


*/
#include<stdio.h>
int main()
{
    int num,i;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("Number is : %d and cube of the %d is :%d\n",i,i,i*i*i);
    }
}

Ques-2
__________
Write a program in C to display the multiplication table for a given integer. 

Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150 

#include<stdio.h>
int main()
{
    int num,i;
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
      printf("%d X %d = %d\n",num,i,num*i);
    }
}

/*
Ques-3
____________
Write a C program to display the sum of n terms of even natural numbers.

Test Data :
Input number of terms : 5
Expected Output :
The even numbers are :2 4 6 8 10
The Sum of even Natural Number upto 5 terms : 30
*/
#include<stdio.h>
int main()
{
    int num,i,sum=0;
    scanf("%d",&num);
    printf("The even numbers are :");
    for(i=2;i<=num*2;i=i+2)
    {
        printf("%d ",i);
        sum=sum+i;
    }
    printf("\nThe Sum of even Natural Number upto %d terms : %d",num,sum);
        
      
}
/*
Ques-4
____________
Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.

Test Data :
Input the number of terms : 5
Expected Output :
1 + 11 + 111 + 1111 + 11111
The Sum is : 12345

*/

#include<stdio.h>
int main()
{
    int num,i,sum=0,multi=0;
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        multi=multi*10+1;
        printf("%d + ",multi);
        sum=sum+multi;
    }
    printf("%d",(multi*10)+1);
    printf("\n");
    printf("The Sum is : %d",sum+((multi*10)+1));      
      
}
/*
Ques-5
_________
 Write a program in C to display the n terms of a harmonic series and their sum.
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms

Test Data :
Input the number of terms : 5
Expected Output :
1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
Sum of Series upto 5 terms : 2.283334


*/

                                                                                                       13 to 14_03_2025

/*

	PrimeFactor
Write a C program to input a number from user and find Prime factors of the given number using
loop. 

Input as : 10
Expected output as :
Prime factors of 10 : 2 5
Sample Input
10
Sample Output
Prime factors of 10: 2 5


Input:
5

Expected Output:
Prime factors of 5: 5

Input:
-12

Expected Output:
Please Enter Positive Number

Input:
12

Expected Output:
Prime factors of 12: 2 3

first method 1.

*/
#include<stdio.h>
int main()
{
    int num,i,j,c=0;
    scanf("%d",&num);
    if(num>0){
        printf("Prime factors of %d: ",num);
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
           for(j=2;j<i;j++)
           {
            if(i%j==0)
            {
                c++;
            }
           
           }
           if(c==0)
           {
             printf("%d ",i);
           }
        }
    }
   
    }
    else
    {
        printf("Please Enter Positive Number");
    }

}


2nd method


#include<stdio.h>
int main()
{
    int num,i,j,c=0;
    scanf("%d",&num);
    if(num>0){
        printf("Prime factors of %d: ",num);
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
          printf("%d ",i);
          num=num/i;
        }
    }
   
    }
    else
    {
        printf("Please Enter Positive Number");
    }

}



/*

ArmstrongNumber
Write a C program to find all Armstrong numbers between 100 to 999 any number
A three digit number is called Armstrong number if sum of cube of its digit is equal to number itself.
E.g.- 153 is an Armstrong number because (1)^3+(5)^3+(3)^3 = 153.

Sample Input
100
200
Sample Output
Armstrong numbers between 100 and 200: 153

Input:
100 200

Expected Output:
Armstrong numbers between 100 and 200: 153

Input:
200 500

Expected Output:
Armstrong numbers between 200 and 500: 370 371 407

Input:
-300 500

Expected Output:
Please Enter positive value


Input:
300 -500

Expected Output:
Please Enter positive value

Program Questions
AddUntillBecameOneDigit

*/
#include<stdio.h>
int main()
{
    int num1,num2,i=0,rem=0;
    scanf("%d%d",&num1,&num2);
    if(num1>0&&num2>0){
        if(num1>99&&num2<1000){
      printf("Armstrong numbers between %d and %d: ",num1,num2);
    for(i=num1;i<num2;i++)//i = 153 154
    {  int c=0;
        int m=i;//153
        while(m!=0){ //153   15 1
       rem=m%10; // 3 5 1
       c=c+rem*rem*rem;// 0+ 27 = 27 + 125 = 152 + 1 = 153
       m=m/10; // 15 1 0

        }
        if(i==c)
        {
            printf("%d ",c);
        }

    }
    }
   
}
    else
    {
        printf("Please Enter positive value");
    }

}
/*
Write a C program to add all the digits present in a given number until it became a single digit.
[if the number is 5678, sum of digit =5+6+7+8=26 , again sum of digit of the sum : 2+6=8] 

Input as : 5678

Ouput as : 8

Sample Input
5678
Sample Output
Single digit sum: 8


Input:
5678

Expected Output:
Single digit sum: 8

Input:
1234

Expected Output:
Single digit sum: 1

Input:
2356

Expected Output:
Single digit sum: 7

Input:
4567

Expected Output:
Single digit sum: 4


Input:
4567

Expected Output:
Single digit sum: 4


Input:
-3557

Expected Output:
Please Enter Positive value

*/

#include<stdio.h>
int main()
{
    int num1,sum;
    scanf("%d",&num1);
    if(num1>0)
    {
        
      while(num1>9)
      {
        int sum=0;
        while(num1!=0)
        {
          int rem=0;
            rem=num1%10;
            sum=sum+rem;
            num1=num1/10;
        }
        num1=sum;
      }
      printf("Single digit sum: %d",num1);
    }
    else
    {
        printf("Please Enter Positive value");
    }
}



we need dry run

#include<stdio.h>
int main()
{
    int num1,c=0,sum=0;
    scanf("%d",&num1);
    if(num1>0)
    {
        
      while(num1>9)
      {
        
        while(num1!=0)
        {
          int rem=0;
            rem=num1%10;
            sum=sum+rem;
            num1=num1/10;
        }
        num1=sum;
    
      }
      printf("Single digit sum: %d",num1);
    }
    else
    {
        printf("Please Enter Positive value");
    }
}

/*

palindrome or Not
[Title:- Armstrong or Not]
--------------------------

Write a C program to check whether a given integer is a palindrome. A number is considered a palindrome if the reverse of the number is equal to the original number.
The program should prompt the user to enter an integer, reverse the number, and then compare it to the original number to determine if it is a palindrome.

Valid Test Cases :-
-------------------
Test-Case-1 :-
--------------
Input: 121
Output: 121 is a palindrome.

Test-Case-2 :-
--------------
Input: 0
Output: 0 is a palindrome.

Test-Case-3 :-
---------------
Input: 12321
Output: 12321 is a palindrome.

Test-Case-4 :-
--------------
Input: 12345
Output: 12345 is not a palindrome.



Input:
121

Expected Output:
121 is a palindrome.

Input:
1233

Expected Output:
1233 is not a palindrome.


Input:
44544

Expected Output:
44544 is a palindrome.
*/
#include<stdio.h>
int main()
{
    int num,sum=0,rev,n;
    scanf("%d",&num);
     n=num;
    for(;n!=0;n=n/10)
    {
       rev=n%10;
       sum=sum*10+rev;

    }
    if(num==sum)
    {
       printf("%d is a palindrome.",sum);
    }
    else
    {
        printf("1233 is not a palindrome.");
    }
}




/*

UniqueNumber
Write a C program to print all the unique digits present in a given number.

Input as : 112334

Output as: 2 4
Sample Input
112334
Sample Output
Unique digits: 2 4


Input:
112334

Expected Output:
Unique digits: 2 4


Input:
56525

Expected Output:
Unique digits: 2 6


Input:
-7656

Expected Output:
Please Enter Positive values


Input:
11112

Expected Output:
Unique digits: 2

*/



pendding




/*	

FibonacciSeries
Write a C program to print Fibonacci series up to n terms.

 Input :
	Enter a number : 5
Expected Output :
0 1 1 2 3 
Sample Input
5
Sample Output
0 1 1 2 3

*/

#include<stdio.h>
int main()
{
    int num1,i,n1=0,n2=1,n3;
    scanf("%d",&num1);
    if(num1>0){
        printf("%d %d",n1,n2);
    for(i=0;i<num1-2;i++)
    {
      n3=n1+n2;
      printf(" %d",n3);
      n1=n2;
      n2=n3;
    }
    }
    else
    {
        printf("Please enter a positive integer.");
    }
}

/*
Prime Number
[Title:- Prime Number Check]
----------------------------

(USING FOR LOOP)
Write a C program to check whether a given number is a prime number or not.

Test-Cases-1 :- Valid Prime Number
---------------
Input :-
--------
Enter a number: 7

Expected Output :-
-------------------
7 is a prime number.

Explanation :- 7 is divisible only by 1 and itself, making it a prime number.
--------------

Test-Cases-2 :- Invalid (Non-Prime) Number
---------------
Input :-
---------
Enter a number: 10

Expected Output :-
------------------
10 is not a prime number.

Explanation :- 10 is divisible by 1, 2, 5, and 10, so it is not a prime number.
--------------

Test-Cases-3 :- Invalid Input (Negative Number)
---------------
Input :-
--------
Enter a number: -5/0

Expected Output :-
------------------
Invalid input. Enter a positive integer.
Sample Input
7
Sample Output
7 is a prime number.


Input:
7

Expected Output:
7 is a prime number.


Input:
5

Expected Output:
5 is a prime number.


Input:
10

Expected Output:
10 is not a prime number.

Input:
-5

Expected Output:
Invalid input. Enter a positive integer.

*/
#include<stdio.h>
int main()
{
    int num1,i,c=0;
    scanf("%d",&num1);
    if(num1>0)
    {
        for(i=1;i<=num1;i++)
        {
            if(num1%i==0)
            {
             c++;
            }
        }
        if(c==2)
        {
            printf("%d is a prime number.",num1);
        }
        else{
            printf("%d is not a prime number.",num1);
        }

    }
    else
    {
        printf("Invalid input. Enter a positive integer.");
    }
}											       




                        										17_03_25
/*

AdamNumber
If a number when reversed, the square of the number and the square of the reversed number should be number which are reverse to each other, is Adam number.
Example: 
Input: 12
12 ^ 2 = 144
21 ^ 2 = 441
The reverse of 144 is equal to 441 and reverse of 441 is equal to 144 so., 12 is an Adam number.
11, 12, 13, 21, 22, 31, 101, 102, 103, 111, 112, 113, 121 ... are Adam numbers.
Sample Input
12
Sample Output
12 is an Adam number.


*/

#include<stdio.h>
#include<math.h>
int main()
{
    int num,p,s,r;
    scanf("%d",&num);
    if(num>0){
        r=num; //225 
    p=num*num;//15*15
    while(r!=0)  //15!=0 true
    {
     int rev=r%10; //5 1
      s=s*10+rev; //5   51
      r=r/10;  //1
    }
    s=s*s;  //  2601
    while(p!=0) //225
    {
     int   rev=p%10; //5 2 2
     r=r*10+rev; //5 522
     p=p/10;//22 2
        
    }
    if(s==r)
    {
        printf("%d is an Adam number.",num);
    }
    else
    {
        printf("%d is not an Adam number.",num);
    }
    }
    else{
        printf("Enter Positive value only...");
    }

}



#include<stdio.h>
#include<math.h>
int main()
{
    int num,p,s,r;
    scanf("%d",&num);
    if(num>0){
        r=num; //225 
    p=num*num;//15*15
    for(;r!=0;r=r/10)  //15!=0 true
    {
     int rev=r%10; //5 1
      s=s*10+rev; //5   51
        //1
    }
    s=s*s;  //  2601
    for(;p!=0;p=p/10) //225
    {
     int   rev=p%10; //5 2 2
     r=r*10+rev; //5 522
     //22 2
        
    }
    if(s==r)
    {
        printf("%d is an Adam number.",num);
    }
    else
    {
        printf("%d is not an Adam number.",num);
    }
    }
    else{
        printf("Enter Positive value only...");
    }

}




/*

AlternateDigitSum
Write a C program to find the alternate digit sum is same or not.

Example-1 as: 12345

1+3+5=9
2+4=6

Output as: Alternate digit sum is not same.

Example-2 as: 12122
1+1+2=4
2+2=4

Output as : Alternate digit sum is same.
Sample Input
12122
Sample Output
Alternate digit sum is same.

*/

#include<stdio.h>
int main()
{
    int num1,s=0,n1,r=0;
    scanf("%d",&num1);
    if(num1>0){
    n1=num1;//12122
    for(;n1!=0;n1=n1/100)
    {
       int rem=n1%10; 
        s=s+rem; 
    }
    num1=num1/10;
    for(;num1!=0;num1=num1/100)
    {
        int rem;
        rem=num1%10;
        r=r+rem;

    }
    if(s==r)
    {
        printf("Alternate digit sum is same.");
    }
    else
    {
        printf("Alternate digit sum is not same.");
    }
    }
    else{
        printf("Invalid Number");
    }
}



/*

PrimeNumbersInRange
Write a C program to find and print all Prime numbers within a given range of two integers, N1 and N2 and count.
The program should read N1 and N2 from the user and display all Prime numbers in this range. 

Sample input : 
	Enter first number : 20
	Enter second number : 10
Sample output :  11  13  17  19 and count is 4 

Sample Input
10 20
Sample Output
Prime numbers in the range are: 11 13 17 19 and count is 4

*/

#include<stdio.h>
int main()
{
    int num1,num2,temp;
    scanf("%d%d",&num1,&num2);
    if(num1>num2){
        temp=num1;
        num1=num2;
        num2=temp;
    }
    printf("Prime numbers in the range are: ");
    int c=0;
    for(int i=num1;i<=num2;i++)
    {
        int t=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
              t++;
            }
            
            
        }
        if(t==2)
        {
            printf("%d ",i);
            c++;
        }

    }
    printf("and count is %d",c);
}
														

