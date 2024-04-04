/*
*
**
***
****
*****
****
***
**
*
*/

#include<stdio.h>
int main()
{
    int i,j,num;
    printf("enter the size of the patterns \n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<num;i++)
    {
        for(j=i;j<num;j++)
        {
            printf("*");

        }
        printf("\n");
    }

}