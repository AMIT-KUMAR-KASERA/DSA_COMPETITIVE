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
