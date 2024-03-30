/*
enter the size of the
9
*********
**     **
* *   * *
*  * *  *
*   *   *
*  * *  *
* *   * *
**     **
*********
*/

/*#include<stdio.h>
int main()
{
    int i,j,num;
    printf("enter the size of the \n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
            if(i==1||i==num||i==j||j==1||j==num||j==num-i+1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
    
        
        }
        printf("\n");
    }
}*/
/*
enter the size of the 
5
*   *
 * *
  *
 * *
*   *

*/
#include<stdio.h>
int main()
{
    int i,j,num;
    printf("enter the size of the \n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
            if(i==1||i==num||j==1||j==num)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
    
        
        }
        printf("\n");
    }
}