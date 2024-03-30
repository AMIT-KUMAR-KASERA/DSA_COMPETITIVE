/*#include<stdio.h>
int main()
{
    int i,j,num,k;
    printf("enter the size of the paramide \n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<num-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<=2*i;k++)
        {
            printf("*");
        }
        printf("\n");

    }
}
*/
#include<stdio.h>
int main()
{
    int i,j,num,k;
    printf("enter the size of the paramide \n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<2*num;j++)
        {
            printf(" ");
        }
        for(k=i;k<=2*i+1;k++)
        {
            printf("*");
        }
        printf("\n");

    }
}