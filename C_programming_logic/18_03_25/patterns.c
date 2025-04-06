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




  ========================================================================================================================
                                                                                                         18_03_25 to 24_03_25




Pattern 13
5  10  15  20  25
4  9   14  19  24
3  8   13  18  23
2  7   12  17  22
1  6   11  16  21
Sample Input
5
Sample Output
5  10  15  20  25
4  9   14  19  24
3  8   13  18  23
2  7   12  17  22
1  6   11  16  21



#include<stdio.h>
int main()
{
    int num,s=0;
    scanf("%d",&num);
    for(int r=num;r>=1;r--)
    {
        s=r;
        for(int c=1;c<=num;c++)
        {
            if(s%2!=0)
            {
                printf("%2d ",s);
                s=s+5;
            }
            else
            {
                printf("%2d ",s);
                s=s+5;
            }

        }
        printf("\n");
    }
}



Pattern 15
1  3  5  7   9
3  5  7  9  11 
5  7  9 11  13
7  9 11 13  15
9 11 13 15  17
_______________
 



Sample Input
5
Sample Output
1  3  5  7    9
3  5  7  9   11 
5  7  9 11   13
7  9 11 13   15
9 11 13 15   17


#include<stdio.h>
int main()
{
    int num,s=0;
    scanf("%d",&num);
    for(int r=1;r<=num*2;r=r+2)
    {
       
        for(int c=r;c<=num*2+r-1;c=c+2)
        {
           printf("%2d ",c);

        }
        printf("\n");
    }
}




Pattern 11
1  6  11  20  21
2  7  12  17  22
3  8  13  18  23
4  9  14  19  24
5  6  15  16  25
Sample Input
5
Sample Output
1  6  11  20  21
2  7  12  17  22
3  8  13  18  23
4  9  14  19  24
5  6  15  16  25


Pattern 12
1  10  11  20  21
2  9   12  19   22
3  8   13  18   23
4  7   14  17   24
5  6   15  16  25
Sample Input
5
Sample Output
1  10  11  20  21
2  9   12  19  22
3  8   13  18  23
4  7   14  17  24
5  6   15  16  25





Pattern 14
1  2  3  4  5
2  3  4  5  6
3  4  5  6  7
4  5  6  7  8
5  6  7  8  9
Sample Input
5
Sample Output
1  2  3  4  5
2  3  4  5  6
3  4  5  6  7
4  5  6  7  8
5  6  7  8  9





-----------------------------------------------------------------------------------------------------------------------------

Pattern 13
5  10  15  20  25
4  9   14  19  24
3  8   13  18  23
2  7   12  17  22
1  6   11  16  21
Sample Input
5
Sample Output
5  10  15  20  25
4  9   14  19  24
3  8   13  18  23
2  7   12  17  22
1  6   11  16  21



#include<stdio.h>
int main()
{
    int num,s=0;
    scanf("%d",&num);
    for(int r=num;r>=1;r--)
    {
        s=r;
        for(int c=1;c<=num;c++)
        {
            if(s%2!=0)
            {
                printf("%2d ",s);
                s=s+5;
            }
            else
            {
                printf("%2d ",s);
                s=s+5;
            }

        }
        printf("\n");
    }
}



Pattern 15
1  3  5  7   9
3  5  7  9  11 
5  7  9 11  13
7  9 11 13  15
9 11 13 15  17
_______________
Sample Input
5
Sample Output
1  3  5  7    9
3  5  7  9   11 
5  7  9 11   13
7  9 11 13   15
9 11 13 15   17


#include<stdio.h>
int main()
{
    int num,s=0;
    scanf("%d",&num);
    for(int r=1;r<=num*2;r=r+2)
    {
       
        for(int c=r;c<=num*2+r-1;c=c+2)
        {
           printf("%2d ",c);

        }
        printf("\n");
    }
}




Pattern 11
1  6  11  20  21
2  7  12  17  22
3  8  13  18  23
4  9  14  19  24
5  6  15  16  25
Sample Input
5
Sample Output
1  6  11  20  21
2  7  12  17  22
3  8  13  18  23
4  9  14  19  24
5  6  15  16  25


Pattern 12
1  10  11  20  21
2  9   12  19   22
3  8   13  18   23
4  7   14  17   24
5  6   15  16  25



Sample Input
5
Sample Output
1  10  11  20  21
2  9   12  19  22
3  8   13  18  23
4  7   14  17  24
5  6   15  16  25





Pattern 14
1  2  3  4  5
2  3  4  5  6
3  4  5  6  7
4  5  6  7  8
5  6  7  8  9
Sample Input
5
Sample Output
1  2  3  4  5
2  3  4  5  6
3  4  5  6  7
4  5  6  7  8
5  6  7  8  9



























Que-1              
______________
1  6  11  20  21
2  7  12  17  22
3  8  13  18  23
4  9  14  19  24
5  6  15  16  25
________________________________


#include<stdio.h>
int main()
{
    int num,s=0;
    scanf("%d",&num);
    for(int r=1;r<=num;r++)
    {
        s=r;
        for(int c=1;c<=num;c++)
        {
            if(s%2!=0)
            {
                printf("%2d ",s);
                s=s+5;
            }
            else
            {
                printf("%2d ",s);
                s=s+5;
            }

        }
        printf("\n");
    }
}




Que-2
_______________
1  10  11  20  21
2  9   12  19  22
3  8   13  18  23
4  7   14  17  24
5  6   15  16  25
_________________________________


#include<stdio.h>
int main()
{
    int num,m=9,n=1;
    scanf("%d",&num);
    for(int r=1;r<=num;r++)
    {
       
       int s=r;
        for(int c=1;c<=num;c++)
        {
          if(c%2==0)
          {
           
              printf("%d ",s);
              s=s+n;
          }
          else
          {
              printf("%d ",s);
              s=s+m;
          }
         
        }
         m=m-2;
          n=n+2;
        printf("\n");
}
}




#include<stdio.h>
int main()
{
      int t=10;
    for(int i=1;i<=5;i++,t--)
    {
        int a=i;
        int t1=t;
        for(int j=1;j<=5;j++)
        {
            if(j%2==0)
            {
                printf("%d ",t1);
                t1+=10;
            }
            else
            {
                printf("%d ",a);
                a+=10;

            }
        }
        printf("\n");
    }
return 0;
}
Que-3



_______________
5  10  15  20  25
4  9   14  19  24
3  8   13  18  23
2  7   12  17  22
1  6   11  16  21
_________________________________



#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int i=5;i>=1;i--)
    {
        int a=i;
        for(int j=1;j<=num;j++)
        {
            printf("%d ",a);
            a=a+5;
            
        }
        printf("\n");
    }
}
Que-4
________________
1  2  3  4  5
2  3  4  5  6
3  4  5  6  7
4  5  6  7  8
5  6  7  8  9
_________________________________


#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        
        for(int j=i;j<=num+i-1;j++)
        {
            printf("%d ",j);
            
            
        }
        printf("\n");
    }
}
Que-5
________________
1  3  5  7  9
3  5  7  9  11 
5  7  9 11  13
7  9 11 13  15
9 11 13 15  17
__________________________________


#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num*2;i=i+2)
    {
        
        for(int j=i;j<=num*2+i-1;j=j+2)
        {
            printf("%3d ",j);
            
            
        }
        printf("\n");
    }
}


#include<stdio.h>
int main()
{
   
    int t=1;
    for(int i=1;i<=5;i++,t+=2)
    {
        int t1=t;
        for(int j=1;j<=5;j++,t1+=2)
        {
            printf("%3d ",t1);
            
            
        }
        printf("\n");
    }
}
Que-6
_________________
0  1  0  1  0
0  0  0  0  0
0  1  0  1  0
0  0  0  0  0 
0  1  0  1  0
__________________________________





#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int r=1;r<=num;r++)
    {
       
       int s=r;
        for(int c=1;c<=num;c++)
        {
          if(c%2==0)
          {
             if((r+c)%2==0)
           
              printf("0");
              else
              {
                  printf("1");
              }
          }
          else
          {
             printf("0");
          }
         
        }
        
      
        printf("\n");
}
}
Que-7
_________________
1 0 1 0 1
0 1 0 1 0
1 0 1 0 1
0 1 0 1 0 
1 0 1 0 1
_________________________________


#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int r=1;r<=num;r++)
    {
       
       
        for(int c=1;c<=num;c++)
        {
             if((r+c)%2==0)
           
              printf("1");
              else
              {
                  printf("0");
              }
        }
        
      
        printf("\n");
}
}
Que-8
_________________
1    2    3    5  
8   13   21   34 
55  89  144  233
377 610 987  1597
________________________________
Que-9
__________________
A  b   C   d  E 
f  G   h   I  j
K  l   M   n  O
p  Q   r   S  t
U  v   W   x  Y
________________________________
Que-10
__________________
  A  a  A  a  A
  b  B  b  B  b
  C  c  C  c  C
  d  D  d  D  d
  E  e  E  e  E




#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);
   
    
    for (int i = 1; i <=n; i++) {
         
          
         for(int j=1;j<=n;j++)
         {
              if((i+j)%2==0)
              {
                  printf("%c ",64+i);
              }
              else
              {
                  printf("%c ",97+i);
              }
             
        
         }
         
          printf("\n");
         
        }
       
    }

   


------------------------------------------------------------------------------------------------------------------------------











-----------------------------------------------------------------------------------------------------------------------------






5
* * * * * 
* * * * 
* * * 
* * 
*


#include<stdio.h>
int main()
{
    int num1;
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++)
    {
        for(int j=i;j<=num1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}


5
    *
   **
  * *
 *  *
*****

#include<stdio.h>
int main()
{
    int num1;
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++)
    {
      
        for(int k=1;k<=num1;k++)
        {
            if(i+k==num1+1||i==5||k==5)
            printf("*");
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}




5
    1
   *1
  3*1
 *3*1
5*3*1


#include <stdio.h>

int main()
{
    int num1;
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++)
    {
      int  m=i;
       
        for(int k=1;k<=num1-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=num1;j++)
        {
            
            if((i+j)>=6){
            if((j%2)!=0)
            {
                printf("%d",m);
            }
              else
              {
                  printf("*");
              }
              m=m-1;
            }
        }
       
        printf("\n");
    }

    return 0;
}





5
 1   2   3   4   5  
 6   7   8   9  
10  11  12  
13  14  
15  



#include <stdio.h>

int main()
{
    int num1;
    int a=1;
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++)
    {
      
       for(int j=1;j<=num1-i+1;j++)
       {
           printf("%2d  ",a);
           a=a+1;
       }
        
       
        printf("\n");
    }

    return 0;
}





5
E D C B A 
E D C B 
E D C 
E D 
E 

#include <stdio.h>

int main()
{
    int num1;
    
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++)
    { 
        int a=0;
      
       for(int j=1;j<=num1-i+1;j++)
       {
           printf("%c ",69+a);
           a=a-1;
       }
        
       
        printf("\n");
    }

    return 0;
}





5
             1 
          3  5 
       7  9 11 
   13 15 17 19 
21 23 25 27 29


#include <stdio.h>

int main()
{
    int num1;
    int a=1;
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++)
    { 
       for(int k=1;k<=num1-i;k++)
       {
           printf("   ");
       }
      
       for(int j=1;j<=i;j++)
       {
           printf("%2d ",a);
           a=a+2;
       }
        
       
        printf("\n");
    }

    return 0;
}



5
             1 
          2  4 
       3  5  7 
    4  6  8 10 
 5  7  9 11 13 
 


#include <stdio.h>

int main()
{
    int num1;
    int a=1;
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++)
    { 
        a=i;
       for(int k=1;k<=num1-i;k++)
       {
           printf("   ");
       }
      
       for(int j=1;j<=i;j++)
       {
           printf("%2d ",a);
           a=a+2;
       }
        
       
        printf("\n");
    }

    return 0;
}


5
    *
   **
  ***
 ****
*****



#include <stdio.h>

int main()
{
    int num1;
    int a=1;
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++)
    { 
      
       for(int k=1;k<=num1-i;k++)
       {
           printf(" ");
       }
      
       for(int j=1;j<=i;j++)
       {
           printf("*");
           
       }
        
       
        printf("\n");
    }

    return 0;
}



5
     1
    11
   121
  1331
 11111




#include<stdio.h>
int main()
{
    int num1;
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++)
    {
        for(int j=1;j<=num1-i+1;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=num1;k++)
        {
            if((i+k)>=6){
            if(i+k==6||i==5||k==5)
            {
                printf("%d",1);
            }
            else{
          printf("%d",i-1);
            }
            }
        }
        printf("\n");
    }
}



* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
#include<stdio.h>
int main()
{
    int num1;
    int a=0;
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++)
    {
        
        
        
        for(int k=1;k<i;k++)
        {
            printf("  ");
        }
        for(int j=i;j<=(num1*2)-i;j++)
        {
          printf("* ");
        }
        a=a+2;
        
        printf("\n");
    }
}



5
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 

#include<stdio.h>
int main()
{
    int num1;
    int a=1;
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++)
    {
        
        for(int k=1;k<=num1-i;k++)
        {
            printf("  ");
        }
        
        for(int j=1;j<=a;j++)
        {
          printf("* ");
        }
         
        a=a+2;
        
        printf("\n");
    }
}




#include<stdio.h>
int main()
{
    int num1;
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++)
    {
        for(int j=1;j<=num1;j++)
        {
            if(j==1||j==5||i==1||i==5||i==3||j==3)
            {
             if(i==1&&j==2||i==2&&j==5||i==4&&j==1||i==5&&j==4)
            {
                printf(" ");
            }
              else
              {
                  printf("*");
              }
            }
          
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}


5
* ***
* *  
*****
  * *
*** *




#include<stdio.h>
int main()
{
    int num1;
    scanf("%d",&num1);
    int a=1;
    for(int i=1;i<=num1-1;i++)
    {
        for(int j=1;j<=num1-i;j++)
        {
            printf(" ");
            
        }
        for(int j=1;j<=a;j++)
        {
            printf("*");
         
        }
           a=a+2;
        printf("\n");
        
        
    }
    
    for(int i=1;i<=num1;i++)
    {
        for(int k=1;k<i;k++)
        
         {
         printf(" ");
         }
        for(int j=i;j<=num1*2-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}



5
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *



#include<stdio.h>
int main()
{
    int num1;
    scanf("%d",&num1);
    int a=num1;
    for(int i=1;i<=num1;i++)
    {
        
        for(int j=1;j<=num1;j++)
        {
            if(i==1||i==num1||i==j||j==a)
            printf("*");
             else
            {
            printf(" ");
            }
            
        }
        a=a-1;
       
       
        printf("\n");
        
        
    }
    
    
}


7
*******
 *   * 
  * *  
   *   
  * *  
 *   * 
*******





#include<stdio.h>
int main()
{
    int num1;
    scanf("%d",&num1);
    int a=num1;
    for(int i=1;i<=num1*2-1;i++)
    {
        if(i<=5){
        
        for(int j=1;j<=i;j++)
        {
            printf("*");
         
            
        }
        }
        else{
            for(int j=i;j<=num1*2-1;j++)
            {
                printf("*");
            }
        }
        
       
        printf("\n");
        
        
    }
    
    
}


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
    int num1;
    scanf("%d",&num1);
    int a=num1;
    for(int i=1;i<=num1*2-1;i++)
    {
        int a=1;
        if(i<=5){
        
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
         
            
        }
        }
        
        else{
            for(int j=i;j<=num1*2-1;j++)
            {
                printf("%d",a);
                a=a+1;
            }
        }
        
       
        printf("\n");
        
        
    }
    
    
}


5
1
12
123
1234
12345
1234
123
12
1





#include<stdio.h>
int main()
{
    int num1;
    scanf("%d",&num1);
    int a=1;
    for(int i=1;i<=num1*2-1;i++)
    {
         
        if(i<=5){
        for(int j=1;j<=num1-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        }
        else
        {
            for(int m=1;m<=a;m++)
            {
                printf(" ");
            }
            for(int k=i;k<=num1*2-1;k++)
            {
                printf("*");
            }
            a=a+1;
        }
        printf("\n");
    }


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

#include <stdio.h>

int main()
{
    int num1;
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++)
    {
        for(int j=1;j<=num1-i;j++)
        {
            printf(" ");
            
        }
        for(int k=1;k<=num1-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


5
    ****
   ****
  ****
 ****
****




#include <stdio.h>

int main()
{
    int num1,a=1;
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++)
    { 
        

        for(int j=1;j<=num1-i;j++)
        {
            printf(" ");
            
        }
        for(int k=1;k<=a;k++)
        {
            if(k==1||k==a||i==num1){
            printf("%c",64+k);
            }
            else
            {
                printf(" ");
            }
            
        }
        a=a+2;
        
        printf("\n");
    }

    return 0;
}


5
    A
   A C
  A   E
 A     G
ABCDEFGHI



#include <stdio.h>

int main()
{
    int num1;
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++)
    {
        
        for(int k=1;k<=i;k++)
        {
            if(k<=5){
            printf("* ");
           
            }
        }
        for(int y=1;y<(num1*2)-(i*2);y++)
        {
            printf("  ");
        }
          for(int j=1;j<=i;j++)
        {
            if(j<5){
            printf("* ");
            }
        }
        for(int k1=1;k1<num1;k1++)
        {
            
            printf(" ");
        }
      
         printf("\n");
       
    }
   
    for(int i=1;i<=num1;i++)
    {
        for(int k=1;k<=num1-i;k++)
        {
            printf("* ");
           
        }
        for(int m=1;m<=(i*2)-1;m++)
        {
            printf("  ");
           
            
        }
        for(int n=1;n<=num1-i;n++)
        {
            printf("* ");
        }
        printf("\n");
        
    }

    return 0;
}




5
*               *     
* *           * *     
* * *       * * *     
* * * *   * * * *     
* * * * * * * * *     
* * * *   * * * * 
* * *       * * * 
* *           * * 
*               * 
                  
