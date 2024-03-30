/*
     *
    ***
   *****
  *******
 *********
  *******
   *****
    ***
     *
*/



#include<stdio.h>
int main()
{
    int i,j,k;
    printf("enter the size of the pattern \n");
    for( i=0;i<5;i++)
    {
    
        for( j=0;j<5-i-1;j++)
        {
            
            printf(" ");
        }
       for(k=0;k<i*2+1;k++)
       {

        printf("*");
       }
       printf("\n");
      
       
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf(" ");
        }
        for(k=i;k<7-i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}