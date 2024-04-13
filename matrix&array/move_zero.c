#include<stdio.h>
void move_zero(int arr[],int n)
{
    int i,count_zero=0;
    int index=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[index]=arr[i];
            index++;

        }
        else
        {
            count_zero++;

        }
       
    }
    while(count_zero!=0)
    {
        arr[index]=0;
        index++;
        count_zero--;
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
    }
}
int main()
{
    int arr[]={1,2,0,3,0,4,5,0,9};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    move_zero(arr,n);
}