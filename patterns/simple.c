/*
enter the pattern is 
8
        ********
       ********
      ********
     ********
    ********
   ********
  ********
 ********
*/

/*#include<stdio.h>
int main()
{
    int i,j,num;
    printf("enter the pattern is \n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<num-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<num;j++)
        {
            if(i==0||i==num-1||j==0||j==num-1)
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

}*/
/*
       *******
      *     *
     *     *
    *     *
   *     *
  *     *
 *******
*/

#include<stdio.h>
int main()
{
    int i,j,num;
    printf("enter the pattern is \n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(j=0;j<num;j++)
        {
            if(i==0||i==num-1||j==0||j==num-1)
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