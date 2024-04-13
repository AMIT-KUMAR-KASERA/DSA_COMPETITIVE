#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("enter the data of \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int rev[5];
   int  j=0;
    for(i=5-1;i>=0;i--)
    {
      rev[j]=arr[i];
      j++;
    }
    printf("reverse of the elements \n");
    for(i=0;i<5;i++)
    {
        printf("%d \t",rev[i]);
    }

}