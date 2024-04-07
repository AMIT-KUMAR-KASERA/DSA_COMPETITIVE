#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    int i;
    for(i=0;i<6;i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("\nreverse of the array-------------> \n");
    int rev[6];
    int j=0;
    for(i=6-1;i>=0;i--)
    {
        rev[j]=arr[i];
        j++;

    }
    printf("reverse of the array elements is----------------> \n");
    for(i=0;i<6;i++)
    {
        printf("%d \t",rev[i]);
    }
    

}