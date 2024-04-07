#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,m,n,k;
    int row,column;
    int row1,column1;
    int matrix[10][10];
    int matrix2[10][10];
    int product[10][10];
    printf("enter the row/columnof the first matrix--------------> \n");
    scanf("%d",&row);
    scanf("%d",&column);
     printf("enter the row/column of the second matrix --------------\n");
     scanf("%d",&row1);
     scanf("%d",&column1);
     printf("if check the matrix multiplication is possible or not-----------> \n");
     if(column==row1)
     {
        printf("matrix multiplication is possible -------------->\n");
     }
     else
     {
        printf("matrix multiplication is not possible----------> \n");
        exit(0);
     }
     printf("enter the first matrix data \n");
     for(i=0;i<row;i++)
     {
        for(j=0;j<column;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
     }
     
      printf("enter the second matrix data \n");
     for(i=0;i<row1;i++)
     {
        for(j=0;j<column1;j++)
        {
            scanf("%d",&matrix2[i][j]);
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
      printf("dispaly the second matrix data \n");
     for(i=0;i<row1;i++)
     {
        for(j=0;j<column1;j++)
        {
            printf("%d \t",matrix2[i][j]);
        }
        printf("\n");
     }

     printf("product of the matrix is \n");
         /* for( i=0; i<row; i++)
{
for ( j=0; j<column1; j++)
{
product[i ][ j ] = 0;
for( k=0; k <column; k++)
product[i ][ j ] = product[ i ][ j ] +matrix[ i ][ k ] * matrix2[ k ][ j ];
}*/
     for(i=0;i<row;i++)
     {
        for(j=0;j<column1;j++)
        {
            product[i][j]=0;
            for(k=0;k<column;k++)
            {
                product[i][j]=product[i][j]+matrix[i][k]*matrix2[k][j];
            }

            
        }
     }
     printf("the resulted matrix is \n");
     for(i=0;i<row;i++)
     {
        for(j=0;j<column1;j++)
        {
            printf("%d\t",product[i][j]);
        }
        printf("\n");
     }
     

}