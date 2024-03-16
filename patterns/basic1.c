/*
******
*****
****
***
**
*
*/
/*
11111
2222
333
44
5
*/

#include<stdio.h>
int main()
{
    int i,j;
    int num;
    printf("enter the size of the array \n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=1;j<=num-i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

}
/*#include<stdio.h>
int main()
{
    int i,j;
    int num;
    printf("enter the size of the array \n");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
       for(j=i;j<=num;j++)
       {
        printf("*");
       }
        printf("\n");
    }

}*/