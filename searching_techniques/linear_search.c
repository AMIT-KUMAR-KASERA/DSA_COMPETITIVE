#include<stdio.h>
#define max 100
int main()
{
    int arr[max],n,se,i,position=-1;
    printf("enter the size of array \n ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("enter elements you want to be search \n");
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(se==arr[i])
        {
            position=i+1;
            break;

        }
    }
    if(position==-1)
    {
        printf("the elements is not found");

    }
    else{
        printf("the elements is found at the position is %d",position);
    }

    


}