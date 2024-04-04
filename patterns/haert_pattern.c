/*
enter the pattern printing 
5
  *****     *****
 *******   *******
********* *********
*******************
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *

*/


#include<stdio.h>
int main()
{
    int i,j,num;
    printf("enter the pattern printing \n");
    scanf("%d",&num);
    for(i=0;i<num-2;i++)
    {
        for(j=0;j<num-3-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<num+i*2;j++)
        {
            printf("*");
        }
        for(int k=0;k<num-2*i;k++)
        {
            printf(" ");

        }
        for(int g=0;g<num+i*2;g++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<2*num;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(int k=i;k<4*num-1-i;k++)
        {
            printf("*");
        }
        printf("\n");
    }



}