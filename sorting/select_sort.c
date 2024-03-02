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