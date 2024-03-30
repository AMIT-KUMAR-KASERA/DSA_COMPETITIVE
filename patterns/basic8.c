/*
*****
*   *
*   *
*   *
*****
*/

#include<stdio.h>
int main()
{
    int i,j,num;
    printf("enter the size of the array \n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
            if(i==1||i==num||j==1||j==num)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
}