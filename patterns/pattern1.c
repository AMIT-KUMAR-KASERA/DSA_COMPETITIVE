/*
  *                1
  * *              1 2
  * * *            1 2 3
  * * * *          1 2 3 4
  * * * * *        1 2 3 4 5
*/
/*#include<stdio.h>
int main()
{
    int i,j;
    int num;
    printf("enter the size of the pattern \n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*  ");
        }
        printf("\n");
    }

}*/

/*
 * * * * *     1 2 3 4 5
 * * * *       1 2 3 4
 * * *         1 2 3
 * *           1 2 
 *             1
*/

/*#include<stdio.h>
int main()
{
    int i,j;
    int num;
    printf("enter the size of the pattern \n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<num-i;j++)
        {
            printf("*  ");
        }
        printf("\n");
    }

}*/

/*
#include<stdio.h>
int main()
{
    int i,j;
    int num;
    printf("enter the size of the pattern \n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=num;j>=i;j--)
        {
            printf("*  ");
        }
        printf("\n");
    }

}*/

/*

* * * * *
  * * * *
    * * *
      * *
        *


*/
/*#include<stdio.h>
int main()
{
    int i,j;
    int num;
    printf("enter the size of the pattern \n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
       for(j=i;j<2*i;j++)
       {
        printf(" ");
       }
       for(j=0;j<num-i;j++)
       {
        printf("*");
       }
       printf("\n");
    }

}*/

/*

* * * * *
  * * * *
    * * *
      * *
        *


*/
/*#include<stdio.h>
int main()
{
    int i,j,k;
    int num;
    printf("enter the size of the pattern \n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
       for(j=i;j<2*i;j++)
       {
        printf(" ");
       }
       for(j=0;j<num-i;j++)
       {
        printf("*");
       }
       printf("\n");
    }

}*/
/*#include<stdio.h>
int main()
{
    int i,j,k;
    int num;
    printf("enter the size of the pattern \n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
       for(j=0;j<i;j++)
       {
        printf(" ");
       }
       for(k=i;k<num;k++)
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
    int num;
    printf("enter the size of the pattern \n");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        for(j=num-i;j>0;j--)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}



