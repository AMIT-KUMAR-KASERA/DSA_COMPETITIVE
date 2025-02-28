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
