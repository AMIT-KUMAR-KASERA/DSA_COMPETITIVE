/*
******
 *****
  ****
   ***
    **
     *

*/

#include<stdio.h>
int main()
{
    int i,j;
    int num;
    printf("enter the size of the array \n");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");

        }
        for(int k=0;k<=num-i;k++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

}
