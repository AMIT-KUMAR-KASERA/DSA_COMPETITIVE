/*
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

#include<stdio.h>
int main()
{
    int i,j,num;
    printf("enter the size of the array \n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
            if(i==1||i==num||j==1||j==num||i==j||j==num-i+1)
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