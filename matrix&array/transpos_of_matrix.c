#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    int row,column;
    int matrix[10][10];
    int matrix1[10][10];
    printf("enter the row/columnof the first matrix--------------> \n");
    scanf("%d",&row);
    scanf("%d",&column);
     
     printf("enter the first matrix data \n");
     for(i=0;i<row;i++)
     {
        for(j=0;j<column;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
     }
     
     printf("dispaly the first matrix data \n");
     for(i=0;i<row;i++)
     {
        for(j=0;j<column;j++)
        {
            printf("%d \t",matrix[i][j]);
        }
        printf("\n");
     }
    
     printf("transpose of the matrix \n");
     for(i=0;i<row;i++)
     {
        for(j=0;j<column;j++)
        {
            matrix1[j][i]=matrix[i][j];

        }
     }
     printf("dispaly the transpose of the matrix \n ");
     for(i=0;i<row;i++)
     {
        for(j=0;j<column;j++)
        {
            printf("%d \t",matrix1[i][j]);
        }
        printf("\n");
     }
}
