#include<stdio.h>
int main()
{
    int i,j,num;
    printf("enter the size of the paramid \n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(int k=i;k<2*num-i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*#include<stdio.h>
int main()
{
    int i,j,num;
    printf("enter the size of the paramid \n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<2*i;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*(num-i)-1;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}*/
