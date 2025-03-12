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


