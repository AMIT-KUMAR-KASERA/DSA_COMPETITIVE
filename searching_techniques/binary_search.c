#include<stdio.h>
#define max 100
int main()
{
    int arr[max],n,se,i,flag=0,first,last,mid;
    printf("enter the size of array \n ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("enter elements you want to be search \n");
    scanf("%d",&se);
    first=0;
    last=n-1;
    while (first<=last)
    {
        mid=(first+last)/2;
        if(se<arr[mid])
        {
            last=mid-1;
        }
        else if(se>arr[mid])
        {
            first=mid+1;
        }
        else
        {
            flag=1;
            break;
        }

    }

    if(flag==1)
    {
        printf("the elements is found at the position is %d",mid+1);
       

    }
    else{
        
         printf("the elements is not found" );
    }
}

    
