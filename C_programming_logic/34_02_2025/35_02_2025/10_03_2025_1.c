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
