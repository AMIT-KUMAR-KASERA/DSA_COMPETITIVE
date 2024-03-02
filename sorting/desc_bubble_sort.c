// bubble sort programe in descending order 
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
            if(arr[j]<arr[j+1])
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