/*
      *
     **
    ***
   ****
  *****
 ******
*/

#include<stdio.h>
int main()
{
    int i,j;
    int k;
    int num;
    printf("enter the size of the array \n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
      for(k=1;k<=num-i;k++)
      {
        printf(" ");
      }
      for(j=1;j<=i;j++){
        printf("%d",i);
      }
      printf("\n");

    }

}