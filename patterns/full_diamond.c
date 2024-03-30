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

/*

 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *
        ***
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************
*******************
*/


#include<stdio.h>
int main()
{
    int i,j,k;
    int num;
    printf("enter the size of the diamond \n");
    scanf("%d",&num);
  
    for(i=0;i<num;i++)
    {
        for(j=0;j<num-i-1;j++)
        {
            printf(" ");
        }
        for(k=0;k<=2*i;k++)
        {
            if(k==0||k==2*i||i==num-1)
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

       for(i=1;i<num;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(k=i;k<2*num-i-1;k++)
        {
            if(k==i||k==2*num-(i+2)||i==num-1)
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