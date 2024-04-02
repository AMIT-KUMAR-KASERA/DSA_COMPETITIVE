#include<stdio.h>
int main()
{
    int num,i,j;
    printf("enter the size of the pattern ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            if(j<(num/2)-i)
            {
                printf("%d",j+1);
            }
        }
        for(int k=6;k<=i+1;k++)
        {
            printf("%d",k);

        }
        printf("\n");
    }
}