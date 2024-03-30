/*
*********
 *******
  *****
   ***
    *

*/

/*#include<stdio.h>
int main()
{
    int i,j;
    printf("pattern printing in \n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(j=i;j<9-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}*/
//panding 
#include<stdio.h>
int main()
{
    int rows =5;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<2*i;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*(rows-i)-1;k++)
        {
            printf("* ");

        }
        printf("\n");
    }
}
