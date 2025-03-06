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



