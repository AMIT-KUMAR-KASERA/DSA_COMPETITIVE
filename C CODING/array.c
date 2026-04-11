Program Questions
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

Input:
6 40 50 30 10 20 6

Expected Output:
Sum of even-indexed elements = 90
Sum of odd-indexed elements = 66


Input:
5 2 4 6 7 8

Expected Output:
Sum of even-indexed elements = 16
Sum of odd-indexed elements = 11



Input:
-5

Expected Output:
Invalid Number


Input:
10 1 2 3 5 4 6 7 9 8 2

Expected Output:
Sum of even-indexed elements = 23
Sum of odd-indexed elements = 24


#include<stdio.h>
int main()
{
   int even=0,odd=0,size;
    scanf("%d",&size);
    
    
        if(size<0){
             printf("Invalid Number");}
    else{
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<size;i++)
    {
        if(i%2==0)
        {
           even=even+arr[i];
        }
        else
        {
            odd=odd+arr[i];

        }
    }
    printf("Sum of even-indexed elements = %d\n",even);
    printf("Sum of odd-indexed elements = %d",odd);

    
    }
   
  
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



Input:
5 1 2 3 4 5

Expected Output:
The elements stored in the first array are: 1 2 3 4 5 
The elements copied into the second array are: 1 2 3 4 5 


Input:
4 -5 0 15 20

Expected Output:
The elements stored in the first array are: -5 0 15 20 
The elements copied into the second array are: -5 0 15 20 

Input:
-3

Expected Output:
Invalid input. Array size must be greater than zero.



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





#include <stdio.h>
// Main function
int main()
{
    int arr1[100], arr2[100];  // Declare two arrays of size 100 to store integer values
    int i, n;  // Declare variables to store array size and loop counter
    // Display a message to the user about the program's purpose
    printf("\n\nCopy the elements of one array into another array:\n");
    printf("----------------------------------------------------\n");
    // Prompt the user to input the number of elements to be stored in the array
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    // Prompt the user to input n elements into the first array
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);  // Read the input and store it in the first array
    }
    /* Copy elements of the first array into the second array. */
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];  // Copy each element from the first array to the second array
    }

    /* Prints the elements of the first array */
    printf("\nThe elements stored in the first array are :\n");
    for (i = 0; i < n; i++)
    {
        printf("% 5d", arr1[i]);  // Print each element in the first array
    }
    /* Prints the elements copied into the second array. */
    printf("\n\nThe elements copied into the second array are :\n");
    for (i = 0; i < n; i++)
    {
        printf("% 5d", arr2[i]);  // Print each element in the second array
    }
    printf("\n\n");  // Print new lines for better formatting
	return 0;
}














ravi
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






===========================================================================



day 2 



Ascending Order
Write a C program to sort a given array in ascending order. 
The program should use the bubble sort algorithm to compare adjacent elements and swap them if they are in the wrong order.
After sorting, the program should print the original array and the sorted array.

Sample input : 
Array: {64, 25, 12, 22, 11}

Sample output :
Original array: 64 25 12 22 11 
Sample Input
5
64
25
12
22
11 
Sample Output
11 12 22 25 64


Input:
5 23 46 32 14 22

Expected Output:
Sorted array in ascending order: 14 22 23 32 46 


Input:
4 1 5 2 4

Expected Output:
Sorted array in ascending order: 1 2 4 5 


Input:
-6

Expected Output:
Invalid Size




#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    if(size>0){
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sorted array in ascending order: ");
    for(int i=0;i<=size-3;i++)
    {
        for(int j=0;j<=size-i-2;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
       
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);

    }
    }
    else
    printf("Invalid Size");
   
}






Sorting in Descending Order
Write a c program to print the array in  Descending Order

Enter the number of elements: 5
Enter 5 elements: 34 12 56 78 23
Sample Input
5
78
45
65
42
85
Sample Output
Sorted array in descending order: 85 78 65 45 42 
Explanation
Use Print function as Give printf("%d ", arr[i]); to avoid the spaces issue




Input:
5 78 45 65 42 85

Expected Output:
Sorted array in descending order: 85 78 65 45 42 


Input:
4 1 2 3 4

Expected Output:
Sorted array in descending order: 4 3 2 1 


Input:
-6

Expected Output:
Invalid Size


Input:
8 45 78 12 63 98 48 75 68

Expected Output:
Sorted array in descending order: 98 78 75 68 63 48 45 12 





Bubble Sort
-> The program should use the bubble sort algorithm to compare adjacent elements and swap them if they are in the wrong order.
-> After sorting, the program should print both the original array and the sorted array.

Sample Test Case :-
--------------
Input :-
--------
Array: {64, 25, 12, 22, 11}  

Output :-
---------
Original array: 64 25 12 22 11  
Sorted array in ascending order: 11 12 22 25 64  
Sample Input
10, -1, 4, 7, 3, -5
Sample Output
Original array: 10 -1 4 7 3 -5  
Sorted array in ascending order: -5 -1 3 4 7 10




Input:
5 64 25 12 22 11

Expected Output:
Original array: 64 25 12 22 11 
Sorted array in ascending order: 11 12 22 25 64 


Input:
6 10 -1 4 7 3 -5

Expected Output:
Original array: 10 -1 4 7 3 -5 
Sorted array in ascending order: -5 -1 3 4 7 10 


Input:
-5 1 2 3 4 5

Expected Output:
Invalid input. Array size must be a positive integer.






Find Maximum And Minimum
Write a C program to find the minimum and maximum elements of a given array.

Sample input:
Array: {23, 45, 12, 78, 5, 89, 34}

Sample output :
Minimum element: 5
Maximum element: 89
Sample Input
7
23 45 12 78 5 89 34
Sample Output
Minimum element: 5
Maximum element: 89



Input:
5 4 5 6 2 8

Expected Output:
Minimum element: 2
Maximum element: 8



Input:
4 12 34 56 44

Expected Output:
Minimum element: 12
Maximum element: 56



Input:
5 56 44 32 11 54

Expected Output:
Minimum element: 11
Maximum element: 56








---------------------------------------------------------------------------day 3



PrintAllEvenElementsAndCount
Write a program in C to print all even elements and count in arrays.

Input :
 Enter array size : 5 
 Enter 5 elements in the array :  25 47 42 56 32

Expected Output :
The Even elements are : 42 56 32
Total number of even : 3
Sample Input
5
25
47
42
56
32
Sample Output
The Even elements are: 42 56 32 
Total number of even: 3



Input:
5 25 47 42 56 32

Expected Output:
The Even elements are: 42 56 32 
Total number of even: 3


Input:
6 1 2 3 4 5 6

Expected Output:
The Even elements are: 2 4 6 
Total number of even: 3


Input:
4 1 3 5 7

Expected Output:
The Even elements are: 
Total number of even: 0




#include<stdio.h>
int main()
{
    int size,c=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Even elements are: ");
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
            c++;

        }
    }
    printf("\nTotal number of even: %d",c);
}





PrintAllOddElementsAndCount
Write a program in C to print all odd elements and count in arrays.

Input :
 Enter array size : 5 
 Enter 5 elements in the array :  25 47 42 56 32

Expected Output :
	The Odd elements are : 25 47
	Total number of odd : 2

Sample Input
5
25
47
42
56
32
Sample Output
The Odd elements are: 25 47 
Total number of odd: 2



Input:
5 25 47 42 56 32

Expected Output:
The Odd elements are: 25 47 
Total number of odd: 2



Input:
6 1 2 3 4 5 6

Expected Output:
The Odd elements are: 1 3 5 
Total number of odd: 3


Input:
4 10 12 14 16

Expected Output:
The Odd elements are: 
Total number of odd: 0




Airthmatic Operation of all Array Elements
Write a program in C to store elements in an array and Perform the arithmetic operation on the array 
    Test case as:
    |- with the less line of code
    |- common element to use while calculating the equation 
 
Input :
	Enter array size : 4
	Enter 4 elements : 1 2 3 4
Output as:  
    sum= 10;
    sub= -8
    multi= 24
Sample Input
5
1
2
3
4
5
Sample Output
sum= 15
sub= -15
multi= 120



Input:
5 1 2 3 4 5

Expected Output:
sum= 15
sub= -13
multi= 120


Input:
3 5 6 8

Expected Output:
sum= 19
sub= -9
multi= 240


Input:
4 2 2 2 5

Expected Output:
sum= 11
sub= -7
multi= 40



#include<stdio.h>
int main()
{
    int size,sum=0,sub=0,multi=1;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
        sub-=arr[i];
        multi*=arr[i];
       
    }
    printf("sum= %d\nsub= %d\nmulti= %d",sum,sub,multi);
   
}



---------------------------------------------------------------------------
Ascending Order
Write a C program to sort a given array in ascending order. 
The program should use the bubble sort algorithm to compare adjacent elements and swap them if they are in the wrong order.
After sorting, the program should print the original array and the sorted array.

Sample input : 
Array: {64, 25, 12, 22, 11}

Sample output :
Original array: 64 25 12 22 11 
Sample Input
5
64
25
12
22
11 
Sample Output
11 12 22 25 64



Input:
5 23 46 32 14 22

Expected Output:
Sorted array in ascending order: 14 22 23 32 46 


Input:
4 1 5 2 4

Expected Output:
Sorted array in ascending order: 1 2 4 5 


Input:
-6

Expected Output:
Invalid Size



#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    if(size>0){
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sorted array in ascending order: ");
    for(int i=0;i<=size-3;i++)
    {
        for(int j=0;j<=size-i-2;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
       
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);

    }
    }
    else
    printf("Invalid Size");
   
}





Sorting in Descending Order
Write a c program to print the array in  Descending Order

Enter the number of elements: 5
Enter 5 elements: 34 12 56 78 23
Sample Input
5
78
45
65
42
85
Sample Output
Sorted array in descending order: 85 78 65 45 42 
Explanation
Use Print function as Give printf("%d ", arr[i]); to avoid the spaces issue




Input:
5 78 45 65 42 85

Expected Output:
Sorted array in descending order: 85 78 65 45 42 


Input:
4 1 2 3 4

Expected Output:
Sorted array in descending order: 4 3 2 1 


Input:
-6

Expected Output:
Invalid Size
Output:


Input:
8 45 78 12 63 98 48 75 68

Expected Output:
Sorted array in descending order: 98 78 75 68 63 48 45 12 



#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    if(size>0){
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sorted array in descending order: ");
    for(int i=0;i<=size-2;i++)
    {
        for(int j=0;j<=size-i-2;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
       
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);

    }
    }
    else
    printf("Invalid Size");
   
}



---------------------------------------------------------------------------
day 4


Find Pair
Write a program to print pairs of two number whose sum is equals to given number

Test Case 1 :
-------------
input :
size = 8
array elements = -3 -2 1 2 4 5 6 7
given number = 2

output :
Pairs with sum 2 are:
(-3, 5)
(-2, 4)


Test Case 2 :
-------------
input :
size = 10
array elements = 1 2 3 4 5 6 7 8 9 10
given number = 10

output :
Pairs with sum 10 are:
(1, 9)
(2, 8)
(3, 7)
(4, 6)


Test Case 3 :
-------------
input :
size = 5
array elements = 1 2 3 4 5
given number = 10

output :
No Pairs

Sample Input
8
-3
-2
1
2
4
5
6
7
2
Sample Output
(-3, 5)
(-2, 4)



Input:
8 -3 -2 1 2 4 5 6 7 2

Expected Output:
(-3, 5)
(-2, 4)


Input:
5 0 -1 2 -3 1 -2

Expected Output:
(-3, 1)


Input:
5 -5 -3 0 3 4 5

Expected Output:
No Pairs



#include<stdio.h>
int main()
{
    int size,result,flag=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&result);
    for(int p=0;p<size;p++)
    {
        for(int q=p+1;q<size;q++)
        {
           if((arr[p]+arr[q])==result)
           {
            printf("(%d, %d)",arr[p],arr[q]);
            flag=1;
           }
        }
    
        printf("\n");
    }
     if(flag!=1)
        {
            printf("No Pairs");
        }
}




OddNumberTimes
Write a program in C to find the number occurring odd number of times in an array.

All numbers occur even number of times except one number which occurs odd number of times.


Test Case 1 :
---------------
 Input :
 Enter array size : 9 
 Enter 9 elements in the array : 8 3 8 5 4 3 4 3 5

 Expected Output :
 The element odd number of times is : 3


Test Case 2 :
---------------
 Input :
 Enter array size : 8 
 Enter 9 elements in the array : 1 1 3 1 2 3 2 2

 Expected Output :
 The element odd number of times is : 1 2


Test Case 3 :
---------------
 Input :
 Enter array size : 8 
 Enter 9 elements in the array : 1 1 2 2 1 1 3 3

 Expected Output :
 Element Not Found

Sample Input
9
8
3
8
5
4
3
4
3
5
Sample Output
The element odd number of times is :3 


Input:
9 8 3 8 5 4 3 4 3 5

Expected Output:
The element odd number of times is :3 


Input:
8 1 1 3 1 2 3 2 2

Expected Output:
The element odd number of times is :1 2 


Input:
8 1 1 2 2 1 1 3 3

Expected Output:
The element odd number of times is Not Found




   #include<stdio.h>
int main()
{
    int size,j=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    for(int p=0;p<5;p++)
    {
        int result=1,flag=0;
       for(int q=p+1;q<size;q++)
       {
        if(arr[p]==arr[q])
        {
            result++;
            arr[q]=-1;
         
        }
       }
      
       if(result>1&&result%2!=0&&arr[p]!=-1)
        {
        printf ("The element odd number of times is :%d ",arr[p]);
            j==1;
        
        }
        
       
    }
    if(j==0)
    {
        printf("Element Not Found");
    }
    
    
}




FindSecondLargestElement

Write a program to print Second Largest Element of array.

Test Case 1 :
-------------
size = 9
elements = 1 2 3 4 5 6 1 6 4
output : 5


Test Case 2 :
-------------
size = 5
elements = 1 1 1 1 1
output : Not Found

Test Case 3 :
-------------
size = 1
elements = 1 
output : Not Found
Sample Input
9
1
2
3
4
5
6
1
6
4
Sample Output
Second Largest element is :-5



Input:
9 1 2 3 4 5 6 1 6 4

Expected Output:
Second Largest element is :-5


Input:
5 1 1 1 1 1

Expected Output:
Not Found


Input:
1 1

Expected Output:
Not Found



PrintUniqueElements
Write a C program to print all the unique elements from an array.

Sample input :
Enter the number of elements in the array: 6
Enter 6 elements: 10 20 20 30 40 10

Sample output :
Unique elements in the array: 30 40
Sample Input
6
10 20 20 30 40 10
Sample Output
30 40

Input:
6 10 20 30 40 10 20

Expected Output:
Unique elements in the array: 30 40 

Input:
7 5 5 8 9 9 10 2

Expected Output:
Unique elements in the array: 8 10 2 


Input:
5 1 21 12 21 1

Expected Output:
Unique elements in the array: 12 



FindSecondSmollestElement
Write a program to print Second Smallest Element of array.

Test Case 1 :
-------------
size = 9
elements = 1 9 3 4 5 6 1 6 4
output : 3


Test Case 2 :
-------------
size = 5
elements = 1 1 1 1 1
output : Not Found

Test Case 3 :
-------------
size = 1
elements = 1 
output : Not Found
Sample Input
9
1
9
3
4
5
6
1
6
4
Sample Output
second smollest element :- 3


Input:
9 1 9 3 4 5 6 1 6 4

Expected Output:
second smollest element :- 3


Input:
5 1 1 1 1 1

Expected Output:
Not Found


Input:
1 1

Expected Output:
Not Found

---------------------------------------------------------------------------
day5

CountTheFrequencyOfEachElement
Write a program in C to count the frequency of each element of an array.

Sample input :
Enter size of array : 5
Enter 5 elements    : 43 25 12 43 43 

Sample output :
The frequency of all elements of an array :
25 occurs 1 times
12 occurs 1 times
43 occurs 3 times
Sample Input
5
43 25 12 43 43
Sample Output
25 occurs 1 times
12 occurs 1 times
43 occurs 3 times


Input:
4 25 25 32 4

Expected Output:
The frequency of all elements of an array:
25 occurs 2 times
32 occurs 1 times
4 occurs 1 times


Input:
5 1 2 1 2 1

Expected Output:
The frequency of all elements of an array:
1 occurs 3 times
2 occurs 2 times


Input:
3 1 1 1

Expected Output:
The frequency of all elements of an array:
1 occurs 3 times


Input:
3 3 2 1

Expected Output:
The frequency of all elements of an array:
3 occurs 1 times
2 occurs 1 times
1 occurs 1 times


FindMissingElements
Write a program in C to find the missing elements in a given array. 

Sample input :
Enter size of array : 6
Enter 6 elements   : 1 3 2 6 9 8

Sample output :
The missing elements is : 4 5 7 
Sample Input
5
1 5 7 10 13
Sample Output
2 3 4 6 8 9 11 12


Input:
5 2 5 6 7 9

Expected Output:
The missing elements are:
3 4 8 


Input:
6 11 13 15 17 18 19

Expected Output:
The missing elements are:
12 14 16 


Input:
3 2 5 9

Expected Output:
The missing elements are:
3 4 6 7 8 


Input:
-8

Expected Output:
Invalid Size..!



InsertIntoIndexPosition
Write a C program to insert an element at a given position in an array.

Sample input : 
Enter the number of elements in the array: 5
Enter 5 elements: 10 20 30 40 50
Enter the element to be inserted: 25
Enter the position: 3

Sample output:
Array after insertion: 10 20 25 30 40 50
Sample Input
5
10 20 30 40 50
25
3
Sample Output

10 20 25 30 40 50


Input:
5 1 2 4 5 6 3 3

Expected Output:
Array after insertion: 1 2 3 4 5 6 


Input:
6 10 20 30 40 60 70 50 5

Expected Output:
Array after insertion: 10 20 30 40 50 60 70 


Input:
3 4 5 6 7 1

Expected Output:
Array after insertion: 7 4 5 6 


Input:
-7

Expected Output:
Invalid size...!


Input:
4 1 2 3 4 5 5

Expected Output:
Array after insertion: 1 2 3 4 5 



DeleteElementGivenElementFromArray
Write a C program to delete a given element from an array.

Sample input :
Enter the number of elements in the array: 8
Enter 8 elements : 10 20 30 30 30 40 50 30
Enter the element to be deleted: 30

Sample output :
Array after deletion: 10 20 40 50
Sample Input
8
10 20 30 30 30 40 50 30
30
Sample Output
10 20 40 50



Input:
8 10 20 30 30 30 40 50 30 30

Expected Output:
10 20 40 50 


Input:
3 1 2 3 3

Expected Output:
1 2 

Input:
5 5 10 15 20 25 10

Expected Output:
5 15 20 25 

Input:
-9

Expected Output:
Invalid size...!



Remove Unique Elements
[Title:- Remove Unique Elements]
---------------------------------
Write a c program to remove all unique elements from an array and return a new array containing only the duplicate elements.

The program should take an array of integers as input, process it to remove the unique elements, and return a new array with only the elements that occur more than once.

Example :-
----------
Input: arr = {1, 2, 3, 1, 1, 1, 2, 4, 5}
Output: [1, 2, 1, 1, 1, 2]

Test-Cases :-
-------------
Test-Case-1 :-
--------------
Input :- arr = {1, 2, 3, 1, 1, 1, 2, 4, 5}
--------
Output :- 1 2 1 1 1 2
---------
Explanation: Only the duplicate elements 1 and 2 are retained in the output array.

Test-Case-2 :-
--------------
Input :- arr = {5, 6, 7, 8, 9}
--------
Output :- 
---------
Explanation :- All elements are unique, so the output is an empty array.
--------------

Test-Case-3 :-
--------------
Input :- arr = {1, 1, 1, 1, 1}
--------
Output :- 1 1 1 1 1
----------
Explanation :- All elements are duplicates, so the output is the same as the input.
--------------

Test-Case-4 :-
--------------
Input :- arr = {} -> if size of the array is 0
--------
Output :- 
----------
Explanation :- The input is an empty array, so the output is also an empty array. Would you like me to provide the Java code implementation for this question?
--------------
Sample Input
5
1
2
3
1
2
Sample Output
1 2 1 2 



Input:
5 1 2 3 1 2

Expected Output:
1 2 1 2 



Input:
10 1 2 3 5 1 3 2 6 4 5

Expected Output:
1 2 3 5 1 3 2 5 


Input:
6 1 2 3 1 2 3

Expected Output:
1 2 3 1 2 3 


---------------------------------------------------------------------------
day6






Qn:1`
RotateAnArray
Write a program in C to rotate an array by N positions.

- Prompt the user to input the size of the array.
- Input the elements of the array.
- Input the position to rotate (the number of positions by which the array should be rotated).
- if the array size is 0 or negative it should print an appropriate message.

Test Case 1:
-----------
input :
	Enter size of array: 11
	Enter 11 elements: 0 3 6 9 12 14 18 20 22 25 27
	Enter the position: 4
Output:
	After rotating from 4th position the array is: 12 14 18 20 22 25 27 0 3 6 9

Test Case 2:
-----------
input :
	Enter size of array: 6
	Enter 6 elements: 10 20 30 40 50 60
	Enter the position: 2
Output:
	After rotating from 2th position the array is: 30 40 50 60 10 20

Test Case 3:
-----------
input :
	Enter size of array: 5
	Enter 5 elements: 1 2 3 4 5
	Enter the position: 0
Output:
	After rotating from 0th position the array is: 1 2 3 4 5

Test Case 4:
-----------
input :
	Enter size of array: 7
	Enter 7 elements: 10 20 30 40 50 60 70
	Enter the position: 7
Output:
	After rotating from 7th position the array is: 10 20 30 40 50 60 70
Sample Input
11
0 3 6 9 12 14 18 20 22 25 27
4
Sample Output
12 14 18 20 22 25 27 0 3 6 9



Ans:-


********************************************************************************************************************************

Qn:-2
DeleteElementGivenElementFromArray
Write a C program to delete a given element from an array.

Sample input :
Enter the number of elements in the array: 8
Enter 8 elements : 10 20 30 30 30 40 50 30
Enter the element to be deleted: 30

Sample output :
Array after deletion: 10 20 40 50
Sample Input
8
10 20 30 30 30 40 50 30
30
Sample Output
10 20 40 50








Ans:-

**************************************************************************************************************************************
Qn:-3
Rearrange Array Elements (Move Zeros to Front)
[Title:- Rearrange Array Elements (Move Zeros to Front)]
--------------------------------------------------------
Write a C program to rearrange the elements of a given array by moving all zeros to the front while maintaining the relative order of non-zero elements.

Example :-
----------
Input :-
--------
[1, 0, 2, 0, 4, 5, 0, 3, 0]

Output :-
---------
[0, 0, 0, 0, 1, 2, 4, 5, 3]

Test Cases :-
--------------
Test Case-1 :- Valid
--------------
Input: {1, 0, 2, 0, 4, 5, 0, 3, 0}
Output: {0, 0, 0, 0, 1, 2, 4, 5, 3}

Test Case-2 :- Valid
--------------
Input: {0, 0, 0, 1, 2, 3}
Output: {0, 0, 0, 1, 2, 3}

Test Case-3 :- Invalid
--------------
Input: {} -> if size of the array is 0
Output: No elements in the array.
Sample Input
9
1
0
2
0
3
0
4
0
5
Sample Output
0 0 0 0 1 2 3 4 5






#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    if(size>0){
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<size;i++)
    {

       for(int j=i+1;j<size;j++)
       {
        if(arr[j]==0){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        break;
            
        }
       }
    }
    
     for(int i=0;i<size;i++)
     {
         printf("%d",arr[i]);
     }
    }
    else
    {
        printf("Invalid size...!");
    }

}


















===========================================================================


FrequencyOfEachElement
Write a program in C to count the frequency of each element of an array.

Sample input :
Enter size of array : 5
Enter 5 elements    : 43 25 12 43 43 

Sample output :
The frequency of all elements of an array :
25 occurs 1 times
12 occurs 1 times
43 occurs 3 times
Sample Input
4
25
25
32
4
Sample Output
The frequency of all elements of an array:
25 occurs 2 times
32 occurs 1 times
4 occurs 1 times


#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<size;j++)
    {
         int v=1;
        for(int i=j+1;i<size;i++)
        {
            if(arr[i]==arr[j])
            {
                v++;
                arr[i]=0;
            }
            
        }
        if(arr[j]!=0)
        {
            printf("%d occurs %d times\n",arr[j],v);
            
        }
    }
}



PrimeElements
Write a C program to print all the prime elements from an array. The program should:

- Prompt the user to input the size of the array.
- Input the elements of the array.
- Identify and print all the prime numbers present in the array.
- if the array size is 0 or negative it should print an appropriate message.


Test Case 1:
-----------
input :
	Enter array size : 7
	Enter 7 elements: 12 5 9 7 11 2 8
Output :
	Prime numbers in the array: 5 7 11 2

Test Case 2:
-----------
input :
	Enter array size : 5
	Enter 5 elements: 4 6 8 9 10
Output :
	Prime numbers in the array: 

Test Case 3:
-----------	
input :
	Enter array size : 4
	Enter 4 elements: 2 3 5 7
Output :
	Prime numbers in the array: 2 3 5 7

Test Case 4:
-----------
input :
	Enter array size : 6
	Enter 6 elements: -1 0 1 17 19 -23
Output :
	Prime numbers in the array: 17 19
Sample Input
7
12
5
9
7
11
2
8
Sample Output
5 7 11 2




#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
   
   printf("Prime numbers in the array:");
   for(int i=0;i<size;i++)
   {
       int flage=0;
       for(int j=1;j<=arr[i];j++)
       {
           if(arr[i]%j==0)
           {
               flage++;
               
           }
          
       }
       if(flage==2)
       {
           printf("%d ",arr[i]);
       }
   }
}






Bubble Sort
-> The program should use the bubble sort algorithm to compare adjacent elements and swap them if they are in the wrong order.
-> After sorting, the program should print both the original array and the sorted array.

Sample Test Case :-
--------------
Input :-
--------
Array: {64, 25, 12, 22, 11}  

Output :-
---------
Original array: 64 25 12 22 11  
Sorted array in ascending order: 11 12 22 25 64  
Sample Input
10, -1, 4, 7, 3, -5
Sample Output
Original array: 10 -1 4 7 3 -5  
Sorted array in ascending order: -5 -1 3 4 7 10




Input:
5 64 25 12 22 11

Expected Output:
Original array: 64 25 12 22 11 
Sorted array in ascending order: 11 12 22 25 64 


Input:
6 10 -1 4 7 3 -5

Expected Output:
Original array: 10 -1 4 7 3 -5 
Sorted array in ascending order: -5 -1 3 4 7 10 


Input:
-5 1 2 3 4 5

Expected Output:
Invalid input. Array size must be a positive integer.




Find Maximum And Minimum
Write a C program to find the minimum and maximum elements of a given array.

Sample input:
Array: {23, 45, 12, 78, 5, 89, 34}

Sample output :
Minimum element: 5
Maximum element: 89
Sample Input
7
23 45 12 78 5 89 34
Sample Output
Minimum element: 5
Maximum element: 89


Input:
5 4 5 6 2 8

Expected Output:
Minimum element: 2
Maximum element: 8


Input:
4 12 34 56 44

Expected Output:
Minimum element: 12
Maximum element: 56

Input:
5 56 44 32 11 54

Expected Output:
Minimum element: 11
Maximum element: 56


Ascending Order
Write a C program to sort a given array in ascending order. 
The program should use the bubble sort algorithm to compare adjacent elements and swap them if they are in the wrong order.
After sorting, the program should print the original array and the sorted array.

Sample input : 
Array: {64, 25, 12, 22, 11}

Sample output :
Original array: 64 25 12 22 11 
Sample Input
5
64
25
12
22
11 
Sample Output
11 12 22 25 64



Input:
5 23 46 32 14 22

Expected Output:
Sorted array in ascending order: 14 22 23 32 46 


Input:
4 1 5 2 4

Expected Output:
Sorted array in ascending order: 1 2 4 5 


Input:
-6

Expected Output:
Invalid Size



Sorting in Descending Order
Write a c program to print the array in  Descending Order

Enter the number of elements: 5
Enter 5 elements: 34 12 56 78 23
Sample Input
5
78
45
65
42
85
Sample Output
Sorted array in descending order: 85 78 65 45 42 
Explanation
Use Print function as Give printf("%d ", arr[i]); to avoid the spaces issue



Input:
5 78 45 65 42 85

Expected Output:
Sorted array in descending order: 85 78 65 45 42 



Input:
4 1 2 3 4

Expected Output:
Sorted array in descending order: 4 3 2 1 


Input:
-6

Expected Output:
Invalid Size


Input:
8 45 78 12 63 98 48 75 68

Expected Output:
Sorted array in descending order: 98 78 75 68 63 48 45 12 



=======================================================================================================
  
PrintAllEvenElementsAndCount
Write a program in C to print all even elements and count in arrays.

Input :
 Enter array size : 5 
 Enter 5 elements in the array :  25 47 42 56 32

Expected Output :
The Even elements are : 42 56 32
Total number of even : 3
Sample Input
5
25
47
42
56
32
Sample Output
The Even elements are: 42 56 32 
Total number of even: 3


#include<stdio.h>
int main()
{
    int size,c=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Even elements are: ");
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
            c++;

        }
    }
    printf("\nTotal number of even: %d",c);
}



PrintAllOddElementsAndCount
Write a program in C to print all odd elements and count in arrays.

Input :
 Enter array size : 5 
 Enter 5 elements in the array :  25 47 42 56 32

Expected Output :
	The Odd elements are : 25 47
	Total number of odd : 2

Sample Input
5
25
47
42
56
32
Sample Output
The Odd elements are: 25 47 
Total number of odd: 2



#include<stdio.h>
int main()
{
    int size,c=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Odd elements are: ");
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
            c++;

        }
    }
    printf("\nTotal number of odd: %d",c);
}



Airthmatic Operation of all Array Elements
Write a program in C to store elements in an array and Perform the arithmetic operation on the array 
    Test case as:
    |- with the less line of code
    |- common element to use while calculating the equation 
 
Input :
	Enter array size : 4
	Enter 4 elements : 1 2 3 4
Output as:  
    sum= 10;
    sub= -8
    multi= 24
Sample Input
5
1
2
3
4
5
Sample Output
sum= 15
sub= -15
multi= 120



#include<stdio.h>
int main()
{
    int size,sum=0,sub=0,multi=1;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
        sub-=arr[i];
        multi*=arr[i];
       
    }
    printf("sum= %d\nsub= %d\nmulti= %d",sum,sub,multi);
   
}




Ascending Order
Write a C program to sort a given array in ascending order. 
The program should use the bubble sort algorithm to compare adjacent elements and swap them if they are in the wrong order.
After sorting, the program should print the original array and the sorted array.

Sample input : 
Array: {64, 25, 12, 22, 11}

Sample output :
Original array: 64 25 12 22 11 
Sample Input
5
64
25
12
22
11 
Sample Output
11 12 22 25 64



#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    if(size>0){
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sorted array in ascending order: ");
    for(int i=0;i<=size-3;i++)
    {
        for(int j=0;j<=size-i-2;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
       
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);

    }
    }
    else
    printf("Invalid Size");
   
}

Sorting in Descending Order
Write a c program to print the array in  Descending Order

Enter the number of elements: 5
Enter 5 elements: 34 12 56 78 23
Sample Input
5
78
45
65
42
85
Sample Output
Sorted array in descending order: 85 78 65 45 42 
Explanation
Use Print function as Give printf("%d ", arr[i]); to avoid the spaces issue



#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    if(size>0){
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sorted array in descending order: ");
    for(int i=0;i<=size-2;i++)
    {
        for(int j=0;j<=size-i-2;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
       
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);

    }
    }
    else
    printf("Invalid Size");
   
}











===========================================================================================================================


Program 1) Write a C program to find and print all the missing elements that are not present in a given array. Given an array of integers, your task is to identify and print all the numbers that are missing within a specified range.
For example:

given the input array arr = [1, 4, 7, 12, 17] 

Expected output as : 2 3 5 6 8 9 10 11 13 14 15 16


//Print all the missing elements in the sorted array






--------------------------------------------------------------------
Program 2) Write a C program that rearranges the elements of a given array by moving all the zeros to the front. The program should take an array as input and swap the positions of non-zero elements with zeros, such that all the zeros appear at the beginning of the array, while maintaining the relative order of non-zero elements.
For example: 
given the input array: [1, 0, 2, 0, 4, 5, 0, 3, 0]
Expected output:
1 2 4 5 3 0 0 0 0
------------------------------------------------------------------------
Program 3)Write a C program to remove all occurrences of a specific element from a given array of integers. The program should display the resulting array after removing the element.

Test Data :
Input the size of array : 10
Input 10 elements in the array : 
3 2 5 6 2 7 9 2 2 1

Input the element that you want to delete: 2

Expected Output : 

The new list is : 3 5 6 7 9 1

----------------------------------------------------------------------

Program 4) Write a C program to insert an element in an array.
Example
Input:-
Input array elements: 10, 20, 30, 40, 50
Input element to insert: 25
Input position where to insert: 3
Output:-
Elements of array are: 10, 20, 25, 30, 40, 50
----------------------------------------------------------------------
5)Write a program in C to merge two arrays of same size sorted in decending order. Go to the editor
Test Data :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1

element - 1 : 2

element - 2 : 3

Input the number of elements to be stored in the second array :3

Input 3 elements in the array :

element - 0 : 1

element - 1 : 2

element - 2 : 3

Expected Output :

The merged array in decending order is :

3 3 2 2 1 1

----------------------------------------------------------------------------
Program 6) Write a program in C to rotate an array by N positions.
--------
Sample input:
The given array is : 0 3 6 9 12 14 18 20 22 25 27
Enter the position :4

Sample output :
After rotating from 4th position the array is:12 14 18 20 22 25 27 0 3 6 9






=================================================================================================================================
  
















