



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



8_03_2025 test
 													10_03_2025



/*
  using while loop
  Program Questions
Palindrome Or Not
Write a C program to check whether a given integer is a palindrome. A number is considered a palindrome if the reverse of the number is equal to the original number. 
The program should prompt the user to enter an integer, reverse the number, and then compare it to the original number to determine if it is a palindrome.

Sample input  : Enter an integer: 131
Sample output : 131 is palindrome number.

Sample input  : Enter an integer: 1121 
Sample output : 1121 is not palindrome number.
Sample Input
131
Sample Output
131 is palindrome number.
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
    int num,a,rem,sum;
    scanf("%d",&num);
    a=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    if(sum==a)
    {
        printf("%d is a palindrome number.",a);
    }
    else
    {
        printf("%d is not a palindrome number.",a);
    }
}




#include<stdio.h>
int main()
{
    int num,a,rem,sum;
    scanf("%d",&num);
    a=num;
    while(num!=0)
    {
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;
    }
    if(sum==a||num==0)
    {
        printf("%d is a palindrome number.",num);
    }
    else
    {
        printf("%d is not a palindrome number.",num);
    }
}

/*

Program Questions
ProdcutOfTheDigit
(USING WHILE LOOP) Write a C program to calculate the product of the digits of a given integer. 
If the number is negative, convert it into positive number before calculating the product.

Sample input  : Enter a number: 1234
Sample output : The product of the digits is: 24

Sample input  : Enter a number: -567
Sample output : The product of the digits is: 210
Sample Input
1234
Sample Output
The product of the digits is: 24
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
    int num,a,rem,pro=1;
    scanf("%d",&num);
    if(num<0) num=-num;
    while(num!=0)
    {
        rem=num%10;
        pro=pro*rem;
        num=num/10;
    }
    
        printf("The product of the digits is: %d",pro);
    
   
}


/*

FindFactorial
write a C program to find the factorial of a given number. Take the input from the user.
Input as :
	Enter a number : 5
Output as :
	Factoria of 5 : 120
Sample Input
5
Sample Output
Factorial of 5: 120

*/
#include<stdio.h>
int main()
{
    int num,fact=1,a;
    scanf("%d",&num);
    a=num;
    if(num>=0)
    {
    while(num!=0)
    {
        fact=fact*num;
        num--;
    }
    printf("Factorial of %d: %d",a,fact);
    }
    else
    {
        printf("Factorial is not defined for negative numbers.");
    }
    
}


/*

Write a C program that converts a given integer into its corresponding word representation for each digit. 
The program should take an integer as input and output each digit of the number in words, separated by spaces.

Sample input  : 1256
Sample output : one two five six
Sample Input
1256
Sample Output
one
two
five
six
Explanation
Note: 1) If number is negative make it into positive. 2) use reverse the number logic as well

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
    int num,rem,sum=0;
    scanf("%d",&num);
    if(num<0)printf("minus\n",num=-num);
    if(num!=0){
    while(num!=0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
 
    while(sum!=0)
    {
        switch(sum%10){
        case 1:
        printf("one\n");
        break;
        case 2:
        printf("two\n");
        break;
        case 3:
        printf("three\n");
        break;
        case 4:
        printf("four\n");
        break;
        case 5:
        printf("five\n");
        break;
        case 6:
        printf("six\n");
        break;
        case 7:
        printf("seven\n");
        break;
        case 8:
        printf("eight\n");
        break;
        case 9:
        printf("nine\n");
        break;
        
        }
        sum=sum/10;

    }
    }
    else
    {
        printf("zero");
    }
    
    
   
}



/*

FindHighestDigit
Write a C program to find the Maximum digit in a given integer number. 
For example, if the input number is 153830, the output should be 8 since 8 is the highest digit in the number.

Sample input : 153830

Sample Output : 8 is highest digit in the number.
Sample Input
153830
Sample Output
8 is the highest digit in the number.
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





FindHighestDigit
Write a C program to find the Maximum digit in a given integer number. 
For example, if the input number is 153830, the output should be 8 since 8 is the highest digit in the number.

Sample input : 153830

Sample Output : 8 is highest digit in the number.
Sample Input
153830
Sample Output
8 is the highest digit in the number.
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
 

Input:
153830

Expected Output:
8 is the highest digit in the number.
Output:
8 is the highest digit in the number.

Input:
7

Expected Output:
7 is the highest digit in the number.
Output:
7 is the highest digit in the number.


Input:
55555

Expected Output:
5 is the highest digit in the number.
Output:
5 is the highest digit in the number.


Input:
00045

Expected Output:
5 is the highest digit in the number.
Output:
5 is the highest digit in the number.


Input:
-98734

Expected Output:
9 is the highest digit in the number.
Output:
9 is the highest digit in the number.

*/
1st method

#include<stdio.h>
int main()
{
    int num,rem,max=-9,min=9;
    scanf("%d",&num);
    if(num<0)num=-num;
    
    while(num!=0)
    {
        rem=num%10;
        if(max<rem)
         max=rem;
         if(min>rem)
         min=rem;
         num=num/10;
        
    }
    printf("%d is the highest digit in the number.",max);

}


2nd method
#include<stdio.h>
int main()
{
    int num,rem,s=0;
    scanf("%d",&num);
    if(num<0)num=-num;
    
    while(num!=0)
    {
        rem=num%10;
        if(rem>s)
        {
           s=rem;
            
        }
        num=num/10;
        
    }
    printf("%d is the highest digit in the number.",s);

}



/******************************************************************************

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


*******************************************************************************/
#include <stdio.h>

int main()
{
    float unit;
    printf("enter units that the user consume \n");
    scanf("%f",&unit);
    (unit<=100)?printf("the total electricity bill is : %.2f",unit*3.00):(unit>100)?printf("the total electricity bill is: Rs %.2f",(100*3.00)+(unit-100)*4.50):printf("the total electricity bill is RS. %.2f",unit*0);

    return 0;
}





/******************************************************************************

Develop a program on a payroll system for a company. 
The system needs to calculate the salary of an employee 
based on their employee type ('M' for manager or 'H' for HR employee) 
and their basic salary. 
For managers, their salary should be increased by 10% as a performance bonus and 
for HR  increased by 5% . Write a C program that takes the employee type and basic salary as 
inputs and calculates the increased salary using the ternary operator.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char ch;
    float salary;
    printf("enter the employee types \n");
    scanf("%c",&ch);
    printf("enter the basic salary of the employee \n");
    scanf("%f",&salary);
    (ch=='M')?printf("the salary should be increase by the managers %.2f",salary*10/100):(ch=='H')&&printf("the increate by the hr %.2f ",salary*5/100);

    return 0;
}

====================================================================================================
	27/02/25

Q. Write a C program that prints numbers from 1 to 10 using only goto and lable and if.
Q. Write a C program to print all even numbers from 2 to 20 using only goto and a label an if .
Q. Write a C program to print the first 10 multiples of a given number using only goto and a label and if. Do not use loops.
Input as :
Enter a number : 5
Output as: 5 10 15 20 25 30 35 40 45 50

===================================================================================================
	1. Program Questions
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
python, c, csharp, java, javascript


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


2  EvenOrOdd
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





 3  Number is Between 1 and 100
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



4  Character is Uppercase or Lowercase
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



5  CheckPositiveNegativeOrZero
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




6  Character is Alphabet
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



7  NumberIsDivisibleByFive
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
===================================================================================================

	Program Questions
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

Allowed Languages



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


Program Questions
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

OddEven
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





PassOrFail
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





ProfitLoss
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





Vowel or Consonant
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
python, c, csharp, java, javascript

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


Triangle Valid Or Not
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
python, c, csharp, java, javascript

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

===========================================================================================================

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
python, c, csharp, java, javascript


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
    else    {
    printf("Not Strictly Increasing");
    }
}




Interview Question by using if else 
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-

Candy Box Fitting Problem
Carlo is shipping out orders of candy to local grocery stores. Each box has a maximum weight limit w. Carlo has two types of candy bars:

Small bars (s) weigh 1 kg each.
Large bars (l) weigh 5 kg each.
Carlo always tries to fit large bars first, before adding small bars to fill the remaining weight.

Write a C program that takes three integers:

s → Number of small bars available.
l → Number of large bars available.
w → Maximum weight limit of the box.
Your task is to determine how many small bars can fit in the box, following the given criteria. If it's impossible to fill the box, print -1.

Constraints
0 ≤ s, l ≤ 1000
1 ≤ w ≤ 5000

Input Format:
Three space-separated integers: s l w

Output Format:
Print the number of small bars used.
Print -1 if it's impossible to fill the box.



Example Test Cases
Test Case 1
Input:
Enter number of small bars : 4
Enter number of large bars : 1
Enter maximun weight : 9
 

Output:
Number of small bar used is : 4

Explanation:
1 large bar (5 kg) is used first.
4 small bars (4 kg) are added to make a total of 9 kg.

Test Case 2
Input:
Enter number of small bars : 4
Enter number of large bars : 1
Enter maximun weight : 4
 

Output:
Number of small bar used is : 4

Explanation:

No large bars can be used because w < 5.
Only 4 small bars are used to reach exactly 4 kg.

Test Case 3
Input:
Enter number of small bars : 2
Enter number of large bars : 2
Enter maximun weight : 6
 

Output:
Number of small bar used is : 1
Explanation:
1 large bar (5 kg) is used first.
1 small bar (1 kg) is added to make a total of 6 kg.

Test Case 4
Input:
Enter number of small bars : 6
Enter number of large bars : 1
Enter maximun weight : 13
 
Output:
Number of small bar used is : -1
Explanation:
1 large bar (5 kg) is used first.
6 small bars (6 kg) are available, but 8 kg is needed.
Not enough small bars available, so it's impossible to reach 13 kg.

Test Case 5
Input:
Enter number of small bars : 60
Enter number of large bars : 100
Enter maximun weight : 550
 

Output:
Number of small bar used is : 50
Explanation:
100 large bars are available, but only 110 (550 / 5) can be used.
The remaining weight is 50 kg, so 50 small bars are used.

	===========================================================================================


	ElectricityBillCalculator
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


#include<stdio.h>
int main()
{
    int unit;
    float bill;
    float Surcharge;
    float Total_bill;
    scanf("%d",&unit);
    if(unit<250||unit>250)
    { 
        
         bill=(unit-200)*0.50+(unit-150)*0.75+(unit-150)*1.20+((unit-250)*1.50) 
           0.20;
         Surcharge=bill*0.20;
         Total_bill=bill+Surcharge;

         if(unit<150||unit>250)
         {
            bill=(unit-100)*0.50+(unit-50)*0.75;
            if(unit>=150&&unit<=250)
            {
                bill=(unit-200)*0.50+(unit-150)*0.75+(unit-150)*1.20;
                if(unit>250)
                {
                    Surcharge=0.20;
                
                    
                    bill=(unit-200)*0.50+(unit-150)*0.75+(unit-150)*1.20+((unit-250)*1.50)0.20;
                    printf("%d")

                }

            }

         }
    }
    return 0;
}



#include<stdio.h>
int main()
{
    int unit;
    float bill;
    float Surcharge;
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
            bill=unit*0.50;
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
        printf("Surcharge (20%%):Rs.%.2f\n", surcharge);
        printf("Total Bill:Rs.%.2f\n", Total_bill);
    }
    else {
        printf("Invalid input! Units must be greater than zero.\n");
    }
    return 0;
}


Q2.OvertimePay
Write a C program to compute the overtime pay for an employee based on the following conditions:

Conditions:
Overtime Pay Calculation:
An employee only earns overtime pay for hours worked beyond 40.
The overtime pay rate is 1.5 times the hourly rate.
If the employee is on vacation, their overtime rate is doubled instead of 1.5×.
Bonus Condition:
If the total hours worked is greater than 70, the gross overtime pay is increased by 15%.
Tax Deduction:
The overtime pay is subject to a tax percentage, which should be deducted from the gross overtime pay.
If the total hours worked is 40 or less, the overtime pay should be $0.00.
Input:
Hourly rate (double)
Number of hours worked (double)
Vacation status (int → 1 for Yes, 0 for No)
Tax rate (double → percentage)
Output:
The final overtime pay after applying the tax deduction.

Example Input/Output:
Input	Output
20 45 0 10	Overtime Pay: 135.00
25 50 1 12	Overtime Pay: 440.00
30 75 0 15	Overtime Pay: 1323.75
18 40 0 10	Overtime Pay: 0.00
22 42 0 5	Overtime Pay: 62.70


==================================================================================================
	
	Write a C program for a service center by following given Rules and Guide lines.


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



And generate the bill in the above format.



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








1. Problem Statement:
Write a C program that takes a month number (1-12) as input from the user and prints the number of days in that month using a switch statement.
If the user enters a number outside the range of 1-12, the program should display an error message.

2. Explanation:
You need to use a switch statement to handle different cases for each month.
For months with 31 days (January, March, May, July, August, October, December), display "31 days".
For months with 30 days (April, June, September, November), display "30 days".
For February (month 2), print "28 or 29 days (depending on leap year)" as February can have 28 or 29 days.
For any invalid month number (not between 1 and 12), print "Invalid month number!".

3. Additional Considerations:
The program should handle user input and validate it using a switch-case structure.
No need for a leap year calculation in this basic program, but mention that leap years affect February’s day count.


Sample input_1  : 3
Sample output_1 : 31 days

Sample input_2  : 2
Sample output_2 : 28 or 29 days (depending on leap year)

Sample input_3  : 11
Sample output_3 : 30 days

=====================================================================

Que 2 :
=======

Write a C program to check the number is even or odd by using Switch Case.

Sample input : 12
Sample output : even

Sample input : 11
Sample output : odd

=====================================================================

Que 3 :
=======

Write a C program to find the maximum between two numbers using Switch statement.

Sample input : 10   20
Sample output : Max = 20

=====================================================================

Que 4 :
=======

Write a C program to do a arithmetic operation on two numbers by using Switch Case.
Take the operators(+,-,*,/,%) as cases and take the input from the user that what kind of operation user want to do on two number.


Sample input :

Enter num1 :10
Enter num2 :20
Enter operation : *


Sample output :

Multiplication is :200

=====================================================================

Que 5 :
=======

Write a C program to check whether a given Alphabet is vowel or consonant or Special characer using Switch Case.

Sample input  : A
Sample output : Vowel

Sample input  : B
Sample output : Consonant

Sample input  : @
Sample output : Special character


=====================================================================

Que 6 :
=======

[Solve Using Switch-case & Goto Statment]

You are required to write a C program that allows the user to control the state of a light and an air conditioner (AC).
The program should present the following menu options to the user:

Turn ON the Light.
Turn OFF the Light.
Turn ON the AC.
Turn OFF the AC.
Based on the user's choice, the program should display the corresponding action message:

If the user selects option 1, display "Light is now ON."
If the user selects option 2, display "Light is now OFF."
If the user selects option 3, display "AC is now ON."
If the user selects option 4, display "AC is now OFF."
The program should also handle invalid input:

If the user enters a number outside the range of 1 to 4, display an error message indicating "Invalid choice! Please enter 1, 2, 3 or 4."
The program should allow the user to retry entering a valid option by using the (goto statement).

Example_1:
-----------

Select an option:
1. Turn ON the Light
2. Turn OFF the Light
3. Turn ON the AC
4. Turn OFF the AC
Enter your choice: 1
Light is now ON.

Example_2:
-----------

Select an option:
1. Turn ON the Light
2. Turn OFF the Light
3. Turn ON the AC
4. Turn OFF the AC
Enter your choice: 4
AC is now OFF.


Example_3:
-----------

Select an option:
1. Turn ON the Light
2. Turn OFF the Light
3. Turn ON the AC
4. Turn OFF the AC
Enter your choice: 5
-----------------------------------------
Invalid choice! Please enter 1, 2, 3, or 4.



===========================================================================================================
CalculateGrades

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

============================================================================================

	CheckCharacter
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



=================================================================================================


	
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

===================================================================================================
	
