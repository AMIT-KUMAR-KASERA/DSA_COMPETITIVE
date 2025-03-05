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



