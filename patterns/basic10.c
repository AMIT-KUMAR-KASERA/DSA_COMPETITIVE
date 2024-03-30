/*
*                   *
 *                 *
  *               *
   *             *
    *           *
     *         *
      *       *
       *     *
        *   *        
         * *
          *
         * *
        *   *
       *     *
      *       *      
     *         *
    *           *
   *             *
  *               *
 *                 *
*                   *

*/

#include<stdio.h>
int main()
{
    int i,j,num;
    printf("enter the size of the array \n");
    scanf("%d",&num);
    int m=2*num-1;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i==j||j==m-i+1)
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