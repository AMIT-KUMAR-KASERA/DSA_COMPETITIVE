/*#include<stdio.h>
int main()
{
    int i,j;
    
    printf("pattern printing in \n");
    for(i=0;i<5;i++)
    {
        for(j=5;j>i;j--)
        {
            printf(" ");
        }
        for(j=0;j<2*i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}*/
#include<stdio.h>
int main()
{
    int i,j;
    printf("pattern printing in \n");
   for(i=0;i<5;i++)
   {
    for(j=0;j<5-i;j++)
    {
        printf(" ");
    }
    for(j=0;j<=i*2;j++)
    {
        printf("*");
    }
    printf("\n");
   }
}