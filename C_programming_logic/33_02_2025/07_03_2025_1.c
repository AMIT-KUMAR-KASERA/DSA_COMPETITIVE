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
