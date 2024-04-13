#include<stdio.h>
#include<limits.h>
void third_largest(int arr[],int n);
int main()
{
    int n;
    int arr[]={10,2,50,30,40,60};
    n=sizeof(arr)/sizeof(arr[0]);
    third_largest(arr,n);
    return 0;

}
void third_largest(int arr[],int arr_size)
{
    int i,j;
    if(arr_size<3)
    {
        printf("invalid input ------------> \n");
        return ;
    }
    int first,second,third;
    first=second=third=INT_MIN;
    for(i=0;i<arr_size;i++)
    {
        if(arr[i]>first)
        {
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second)
        {
            third=second;
            second=arr[i];
        }
        else if(arr[i]>third)
        {
            third=arr[i];
        }
    }
    printf("the third largest is ---->%d \t%d\t %d",first,second,third);


}