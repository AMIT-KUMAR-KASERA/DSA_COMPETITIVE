#include<stdio.h>
int main()
{
    int arr[10][10];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("print the array elements \n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
    printf("printing the diagonal elements in array \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i+j==2)
            {
                printf("%d",arr[i][j]);

            }
        }
    }
}