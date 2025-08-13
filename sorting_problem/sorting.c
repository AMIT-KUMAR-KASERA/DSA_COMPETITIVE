Bubble_sort:-
===========
#include<stdio.h>
#define max 10
int main()
{
    int arr[max],i,n;
    printf("enter the size of the array elements----------> \n");
    scanf("%d",&n);
    printf("enter the elements -------------> \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("sorting process ---------------> \n");
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
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
    printf("display the elements \n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }
}

selection_sort:-
==============

#include<stdio.h>
#define max 10
int main()
{
    int arr[max],i,n;
    printf("enter the size of the array elements----------> \n");
    scanf("%d",&n);
    printf("enter the elements -------------> \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("sorting process ---------------> \n");
    for(i=0;i<n-1;i++)
    {
        int max_value=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[max_value])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[max_value];
                arr[max_value]=temp;
            }
        }
    }
    printf("display the elements ------------> \n");
    for(i=0;i<n;i++)
    {
        printf("%d ------->",arr[i]);
    }
}


printing ascending order:-
========================
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int main()
{ 
    int Q[MAX],i,t,j,n;
    printf("\n Enter the number to taken ");
    scanf("%d",&n);
    printf("\n Enter %d element : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&Q[i]);
    }
    for(i=0;i<=n-2;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(Q[i]>Q[j])
            {
                t=Q[i];
                Q[i]=Q[j];
                Q[j]=t;
            }
        }
    }
    printf("\n Number is sorted order in Asc order : ");
    for(i=0;i<n;i++)
    {
        printf("%d ---->",Q[i]);
    }
    return 0;
} 


heap_sort:-
=========
#include<stdio.h>
void maxheapify(int a[],int , int );
void maxheap(int a[],int beg,int end)
{
    int i;
    for(i=end/2;i>=beg;i--)
    {
        maxheapify(a,i,end);
    }
}
void maxheapify(int a[],int f, int size)
{
    int max=f, l=f*2,r=f*2+1,t;
    if(l<=size&&a[l]>a[max])
    max=l;
    if(r<=size&&a[r]>a[max])
    max=r;
    if(f!=max)
    {
        t=a[f];
        a[f]=a[max];
        a[max]=t;
        maxheapify(a,max,size);
    }
}
void heapsort(int a[],int size)
{
    int i,t;
    for(i=size;i>=2;i--)
    {
        t=a[1];
        a[1]=a[i];
        a[i]=t;
        maxheapify(a,1,i-1);
    }
}
void main()
{
    int a[10],i;
    printf("enter array elements :");
    for(i=1;i<10;i++)
        scanf("%d",&a[i]);
        maxheap(a,1,9);
        heapsort(a,9);
        printf("\n sorted array :\n");
        for(i=1;i<10;i++)
        {
            printf("%4d",a[i]);
        }
}

// enter five elements and sorted according to last digit
/*
  input      output
  9           10
  501         501
  16          803
  228         16
  10          228
  803         9


*/
#include<stdio.h>
#define max 10
int main()
{
    int arr[max],i,n;
    printf("enter the size of the array elements----------> \n");
    scanf("%d",&n);
    printf("enter the elements -------------> \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("sorting process ---------------> \n");
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]%2>arr[j+1]%2)
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
    printf("display the elements \n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }
}

quick_sort:-
==========
// using recursion
#include <stdio.h>
void quicksort(int ar[], int first, int last);
int main()
{
    int a[50], i, n;
    printf("enter total values stored into array : \n");
    scanf("%d", &n);
    printf("enter %d values :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("original list is :  \n");
    for (i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
    quicksort(a, 0, n - 1);
    printf("\n sortest list is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
    return 0;
}
void quicksort(int arr[], int first, int last)
{
    int pivot, i, r, temp, j;

    if (first < last)
    {
        pivot = first;
        i = first + 1;
        j = last;
        while (i < j)
        {
            while (arr[i] <= arr[pivot] && i <= last)
                i++;
            while (arr[j] > arr[pivot] && j >= first)
                j--;
            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            temp = arr[pivot];
            arr[pivot] = arr[j];
            arr[j] = temp;  
        }
         quicksort(arr, first, j - 1);
        quicksort(arr, j + 1, last);
    }
}
