                                                           27-03-2025


/* Program Questions
Sum of Elements
-> Reads an integer N from the user to define the size of a dynamically allocated array.
-> Prompts the user to input N integer values into the array.
-> Calculates and prints the sum of all elements in the array.

Sample TestCase :-
--------------------------
Input :-
--------
Enter the size of the array: 6  
Enter 6 elements into the array:  
8  2  3  4  5  6  

Output :-
---------
The sum of all elements in the array is: 28  
Sample Input
5
-2  -4  -6  -8  -10
Sample Output
The sum of all elements in the array is: -30

*/
#include<stdio.h>
int main()
{
   int sum=0,size;
    scanf("%d",&size);
    
    if(size<0){
        printf("Invalid input. Array size must be a positive integer");
    }
    else
    {
        if(size>0){
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The sum of all elements in the array is: ");
    for(int j=0;j<size;j++)
    {
        sum=sum+arr[j];
    }
    printf("%d",sum);
    }
    else
    {
        printf("Invalid input. Array size must be greater than %d",size);
    }
    }
  

}


/*
Print Reverse Array
Write a program in C to store N number of values in an array and display them in reverse order.

Sample input :
element - 0 : 2
element - 1 : 5
element - 2 : 7

Sample output :
The values store into the array are :2 5 7
The values store into the array in reverse are :7 5 2
Sample Input
3
1
2
3
Sample Output
The values stored into the array are: 1 2 3 
The values stored into the array in reverse are: 3 2 1 

*/
#include<stdio.h>
int main()
{
   int sum=0,size;
    scanf("%d",&size);
    
    
        if(size<0){
             printf("Invalid Number");}
    else{
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The values stored into the array are: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<size/2;i++)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
    printf("The values stored into the array in reverse are: ");
    for(int j=0;j<size;j++)
    {
        printf("%d ",arr[j]);
    }
    
    }
   
  
}
    
 /* 

Sum Of Even And Sum Of Odd Elements
Sum of Even-Indexed and Odd-Indexed Elements

Ex:Enter the number of elements: 10
Enter 10 elements: 1 2 3 4 5 6 7 8 9 10
Sum of even-indexed elements = 25
Sum of odd-indexed elements = 30
Sample Input
6
10
20
30
40
50
60
Sample Output
Sum of even-indexed elements = 90
Sum of odd-indexed elements = 120

*/

/*

Q4.Even and Odd Indices
Write a C program that performs the following tasks :-
-------------------------------------------------------

-> Dynamically allocate memory for an array to store 10 integer values.
-> Use a for loop to prompt the user to input 10 integer values and store them in the array.
-> Use separate for loops to print all the elements located at even indices and odd indices of the array.


Sample Test Case :-
-------------------------
Input :-
--------
Enter 10 integer elements:  
12 23 34 45 56 67 78 89 90 11  

Output :-
----------
Elements at even indices are :-  
Element at index 0: 12  
Element at index 2: 34  
Element at index 4: 56  
Element at index 6: 78  
Element at index 8: 90  

Elements at odd indices are :-  
Element at index 1: 23  
Element at index 3: 45  
Element at index 5: 67  
Element at index 7: 89  
Element at index 9: 11  
Sample Input
1 2 3 4 5 6 7 8 9 10
Sample Output
Elements at even indices are :-  
Element at index 0: 1  
Element at index 2: 3  
Element at index 4: 5  
Element at index 6: 7  
Element at index 8: 9  

Elements at odd indices are :-  
Element at index 1: 2  
Element at index 3: 4  
Element at index 5: 6  
Element at index 7: 8  
Element at index 9: 10 

*/
#include<stdio.h>
int main()
{
   int sum=0,size;
    scanf("%d",&size);
    
    if(size<0){
        printf("Invalid input. Array size must be a positive integer");
    }
    else
    {
        if(size>0){
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements at even indices are :-  \n");
    for(int j=0;j<size;j++)
    {
        if(arr[j]%2==0)
        {
            printf("Element at index %d: %d  \n",j,arr[j]);
        }
        
    }
    printf("Elements at odd indices are :-  \n");
    
    for(int j=0;j<size;j++)
    {
        if(arr[j]%2!=0)
        {
            printf("Element at index %d: %d  \n",j,arr[j]);
        }
        
    }
    
     }
    }
        
  

}


/*
Q5.Copy the elements of one array into another array
Write a program in C to copy the elements of one array into another array?
---------------------------------------------------------------------------

Test-Case-1 :-
---------------
Input :-
--------
Array size: 5  
Element at index 0: 1  
Element at index 1: 2  
Element at index 2: 3  
Element at index 3: 4  
Element at index 4: 5  

Output :-
---------
The elements stored in the first array are: 1 2 3 4 5  
The elements copied into the second array are: 1 2 3 4 5  

Test-Case-2 :-
---------------
Input :-
---------
Array size: 1  
Element at index 0: 100  

Output :-
----------
The elements stored in the first array are: 100  
The elements copied into the second array are: 100  

Test-Case-3 :-
---------------
Input :-
--------
Array size: 4  
Element at index 0: -5  
Element at index 1: 0  
Element at index 2: 15  
Element at index 3: 20  

Output :-
----------
The elements stored in the first array are: -5 0 15 20  
The elements copied into the second array are: -5 0 15 20  

Test-Case-4 :-
--------------
Input :-
---------
Array size: -3  

Output :-
----------
Invalid input. Array size must be a positive integer.  

Test-Case-5 :-
---------------
Input :-
---------
Array size: 0  

Output :-
---------
Invalid input. Array size must be greater than zero.  
Sample Input
5
1
2
3
4
5
Sample Output
The elements stored in the first array are: 1 2 3 4 5 
The elements copied into the second array are: 1 2 3 4 5 
Sample Output
The elements stored in the first array are: 1 2 3 4 5 
The elements copied into the second array are: 1 2 3 4 5 
*/
ANS:
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    if(n>0)
    {
        printf("The elements stored in the first array are: ");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            printf("%d ",a[i]);
        }
        printf("\nThe elements copied into the second array are: ");
       for(int j=0;j<n;j++ )
       {
         b[j]=a[j];
         printf("%d ",b[j]);
       }
    }
    else printf("Invalid input. Array size must be greater than zero.");
    return 0;
}




















<----------------------------------------------------------------------------------------------------------------------------------------------------
1.Sum of Elements
-> Reads an integer N from the user to define the size of a dynamically allocated array.
-> Prompts the user to input N integer values into the array.
-> Calculates and prints the sum of all elements in the array.

Sample TestCase :-
--------------------------
Input :-
--------
Enter the size of the array: 6  
Enter 6 elements into the array:  
8  2  3  4  5  6  

Output :-
---------
The sum of all elements in the array is: 28  
Sample Input
5
-2  -4  -6  -8  -10
Sample Output
The sum of all elements in the array is: -30

ANS:
#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
   if(n>0)
   {
      
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
       sum+=a[i]; 
    }
    printf("The sum of all elements in the array is: %d ",sum);
   }
   else if(n==0) printf("Invalid input. Array size must be greater than %d",n);
   else printf("Invalid input. Array size must be a positive integer");
   return 0;
}

Q2.Print Reverse Array
Write a program in C to store N number of values in an array and display them in reverse order.

Sample input :
element - 0 : 2
element - 1 : 5
element - 2 : 7

Sample output :
The values store into the array are :2 5 7
The values store into the array in reverse are :7 5 2
Sample Input
3
1
2
3
Sample Output
The values stored into the array are: 1 2 3 
The values stored into the array in reverse are: 3 2 1 

ANS:
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    if(n>0)
    {
        printf("The values stored into the array are: ");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            printf("%d ",a[i]);
        }
        printf("\nThe values stored into the array in reverse are: ");
        for(int j=n-1;j>=0;j--)
        {
            printf("%d ",a[j]);
        }
    }
    else printf("Invalid Number");
    return 0;
}

Q3.Sum Of Even And Sum Of Odd Elements
Sum of Even-Indexed and Odd-Indexed Elements

Ex:Enter the number of elements: 10
Enter 10 elements: 1 2 3 4 5 6 7 8 9 10
Sum of even-indexed elements = 25
Sum of odd-indexed elements = 30
Sample Input
6
10
20
30
40
50
60
Sample Output
Sum of even-indexed elements = 90
Sum of odd-indexed elements = 120

ANS:
#include<stdio.h>
int main()
{
   int n,esum=0,osum=0;
   scanf("%d",&n);
   int a[n];
   if(n>0)
   {
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0) esum+=a[i];
        else osum+=a[i];
    }
    printf("Sum of even-indexed elements = %d\n",esum);
    printf("Sum of odd-indexed elements = %d",osum);
   }
   else printf("Invalid Number");
   return 0; 
}

Q4.Even and Odd Indices
Write a C program that performs the following tasks :-
-------------------------------------------------------

-> Dynamically allocate memory for an array to store 10 integer values.
-> Use a for loop to prompt the user to input 10 integer values and store them in the array.
-> Use separate for loops to print all the elements located at even indices and odd indices of the array.


Sample Test Case :-
-------------------------
Input :-
--------
Enter 10 integer elements:  
12 23 34 45 56 67 78 89 90 11  

Output :-
----------
Elements at even indices are :-  
Element at index 0: 12  
Element at index 2: 34  
Element at index 4: 56  
Element at index 6: 78  
Element at index 8: 90  

Elements at odd indices are :-  
Element at index 1: 23  
Element at index 3: 45  
Element at index 5: 67  
Element at index 7: 89  
Element at index 9: 11  
Sample Input
1 2 3 4 5 6 7 8 9 10
Sample Output
Elements at even indices are :-  
Element at index 0: 1  
Element at index 2: 3  
Element at index 4: 5  
Element at index 6: 7  
Element at index 8: 9  

Elements at odd indices are :-  
Element at index 1: 2  
Element at index 3: 4  
Element at index 5: 6  
Element at index 7: 8  
Element at index 9: 10 

ANS:
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    if(n>0)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Elements at even indices are :-\n");
        for(int i=0;i<n;i+=2)
        {
            printf("Element at index %d: %d\n",i,a[i]);
        }
        printf("Elements at odd indices are :-\n");
        for(int i=1;i<n;i+=2)
        {
            printf("Element at index %d: %d\n",i,a[i]);
        }
    }
    else printf("Invalid input. Array size must be a positive integer.");
    return 0;
}

Q5.Copy the elements of one array into another array
Write a program in C to copy the elements of one array into another array?
---------------------------------------------------------------------------

Test-Case-1 :-
---------------
Input :-
--------
Array size: 5  
Element at index 0: 1  
Element at index 1: 2  
Element at index 2: 3  
Element at index 3: 4  
Element at index 4: 5  

Output :-
---------
The elements stored in the first array are: 1 2 3 4 5  
The elements copied into the second array are: 1 2 3 4 5  

Test-Case-2 :-
---------------
Input :-
---------
Array size: 1  
Element at index 0: 100  

Output :-
----------
The elements stored in the first array are: 100  
The elements copied into the second array are: 100  

Test-Case-3 :-
---------------
Input :-
--------
Array size: 4  
Element at index 0: -5  
Element at index 1: 0  
Element at index 2: 15  
Element at index 3: 20  

Output :-
----------
The elements stored in the first array are: -5 0 15 20  
The elements copied into the second array are: -5 0 15 20  

Test-Case-4 :-
--------------
Input :-
---------
Array size: -3  

Output :-
----------
Invalid input. Array size must be a positive integer.  

Test-Case-5 :-
---------------
Input :-
---------
Array size: 0  

Output :-
---------
Invalid input. Array size must be greater than zero.  
Sample Input
5
1
2
3
4
5
Sample Output
The elements stored in the first array are: 1 2 3 4 5 
The elements copied into the second array are: 1 2 3 4 5 

ANS:
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    if(n>0)
    {
        printf("The elements stored in the first array are: ");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            printf("%d ",a[i]);
        }
        printf("\nThe elements copied into the second array are: ");
       for(int j=0;j<n;j++ )
       {
         b[j]=a[j];
         printf("%d ",b[j]);
       }
    }
    else printf("Invalid input. Array size must be greater than zero.");
    return 0;
}

