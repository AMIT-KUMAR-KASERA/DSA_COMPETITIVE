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
            if(i==0||i==num-1||j==0||j==i)
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