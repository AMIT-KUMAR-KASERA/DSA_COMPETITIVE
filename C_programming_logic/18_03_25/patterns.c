                                                                                                      18_03-25


#include<stdio.h>
int main()
{
    int i,j,nr,nc;
    printf("enter number of rows and columns\n");
    scanf("%d%d",&nr,&nc);
    for(i=1;i<=nr;i++)
    {
        for(j=1;j<=nc;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
}



*****
*****
*****
*****
*****




#include<stdio.h>
int main()
{
    int i,j,nr,nc;
    printf("enter number of rows and columns\n");
    scanf("%d%d",&nr,&nc);
    for(i=1;i<=nr;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
}



enter number of rows and columns
5
5
*
**
***
****
*****


first method

#include<stdio.h>
int main()
{
    int i,j,nr,nc;
    printf("enter number of rows and columns\n");
    scanf("%d%d",&nr,&nc);
    for(i=1;i<=nr;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
}



enter number of rows and columns
5
5
*****
****
***
**
*

2nd method
#include<stdio.h>
int main()
{
    int i,j,nr,nc;
    printf("enter number of rows and columns\n");
    scanf("%d%d",&nr,&nc);
    for(i=0;i<=nr-1;i++)
    {
        for(j=1;j<=nc-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
}

*****
****
***
**
*



#include<stdio.h>
int main()
{
    int nr,nc;
    printf("enter number of rows and columns\n");
    scanf("%d%d",&nr,&nc);
    
    
    for(int i=1;i<=nr-1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
            
        }
        printf("\n");
    }
    for(int i=0;i<=nr-1;i++)
    {
        for(int j=1;j<=nc-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    
}



enter number of rows and columns
5
5
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 




#include<stdio.h>
int main()
{
    int nr,nc;
    printf("enter number of rows and columns\n");
    scanf("%d%d",&nr,&nc);
    
    

    for(int i=0;i<=nr-1;i++)
    {
        for(int j=1;j<=nc-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for(int i=1;i<=nr;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
}


enter number of rows and columns
5
5
*****
****
***
**
*
*
**
***
****
*****




#include<stdio.h>
int main()
{
    int nr,nc;
    printf("enter number of rows and columns\n");
    scanf("%d%d",&nr,&nc);
    
    

    for(int i=1;i<=nr;i++)
    {
        for(int j=1;j<=nc-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
   
    
    
}


enter number of rows and columns
5
5
    *
   **
  ***
 ****
*****





#include<stdio.h>
int main()
{
    int nr,nc;
    printf("enter number of rows and columns\n");
    scanf("%d%d",&nr,&nc);
    
    

    for(int i=0;i<=nr-1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" ");
        }
       
         for(int k=1;k<=nc-i;k++)
        {
            printf("*");
        }
        
        
        
        printf("\n");
    }
    
}


enter number of rows and columns
5
5
*****
 ****
  ***
   **
    *



#include<stdio.h>
int main()
{
    int nr,nc;
    printf("enter number of rows and columns\n");
    scanf("%d%d",&nr,&nc);
    
    for(int i=1;i<=nr-1;i++)
    {
        for(int j=1;j<=nc-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    

    for(int i=0;i<=nr-1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" ");
        }
       
         for(int k=1;k<=nc-i;k++)
        {
            printf("*");
        }
        
        
        
        printf("\n");
    }
    
}



enter number of rows and columns
5
5
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *


#include<stdio.h>
int main()
{
    int nr,nc;
    printf("enter number of rows and columns\n");
    scanf("%d%d",&nr,&nc);
    
    for(int i=1;i<=nr-1;i++)
    {
        for(int j=1;j<=nc-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    
    
    

    for(int i=0;i<=nr-1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" ");
        }
       
         for(int k=1;k<=nc-i;k++)
        {
            printf(" * ");
        }
        
        
        
        printf("\n");
    }
    
}



enter number of rows and columns
5
5
     * 
    *  * 
   *  *  * 
  *  *  *  * 
 *  *  *  *  * 
  *  *  *  * 
   *  *  * 
    *  * 
     * 




#include<stdio.h>
int main()
{
    int nr,nc;
    printf("enter number of rows and columns\n");
    scanf("%d%d",&nr,&nc);
    
    for(int i=1;i<=nr;i++)
    {
        for(int j=1;j<=nc-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        for(int m=1;m<=i-1;m++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}



enter number of rows and columns
5
5
    *
   ***
  *****
 *******
*********
