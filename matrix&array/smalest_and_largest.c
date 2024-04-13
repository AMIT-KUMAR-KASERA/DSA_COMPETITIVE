#include<stdio.h>
int main()
{
    int arr[]={1,10,3,4,5};
    int i;
    int max;
    int min;
    max=min=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }

    }
    printf("%d \t %d",min,max);
}