/*
enter the size of the pattern  
5
     1
    2 3
   4 5 6
  7 8 9 10
 11 12 13 14 15

*/

#include<stdio.h>
int main()
{
    int i,j,num;
    int k=1;
    printf("enter the size of the pattern  \n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        
for(j=0;j<num-i;j++)
{
    printf(" ");
}

        for(j=i;j<=i*2;j++)
        {
            printf("%d ",k);
            k++;
           
        }
        printf("\n");
    }
}