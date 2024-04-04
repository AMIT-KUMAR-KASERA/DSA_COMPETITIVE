/*enter the size of the pattern 5
1234554321
1234  4321
123    321
12      21
1        1
1        1
12      21
123    321
1234  4321
1234554321

#include<stdio.h>
int main()
{
    int num,i,j;
    printf("enter the size of the pattern ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=1;j<num-i+1;j++)
        {
            printf("%d",j);
        }
        for(int k=0;k<2*i;k++)
        {
            printf(" ");
        }
        for(int g=5-i;g>=1;g--)
        {
            printf("%d",g);
        }

        printf("\n");

    }
    for(i=0;i<num;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",j+1);
        }
        for(int g=0;g<2*num-i*2-2;g++)
        {
            printf(" ");
        }
        for(int k=i+1;k>=1;k--)
        {
            printf("%d",k);
        }
       printf("\n");
    }
}
*/
#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("enter value of n :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        for (j = i; j <= n; j++)
        {
            printf("*");
        }
        for (j = 1; j <= (2 * i - 2); j++)
        {
            printf(" ");
        }
        for (j = i; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)

        {
            printf("*");
        }
        for (j = (2 * i - 2); j < (2 * n - 2); j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
