#include<stdio.h>
int main()
{
    int i,j,num,k;
    int f;
    int result=2;
 
    printf("enter the size of the pattern \n");
    scanf("%d",&num);
    int g=1;
    for(i=0;i<num;i++)
    {
      
        for(j=0;j<num-i;j++)
        {
            printf(" ");
        }
        for(k=g;k<=i+i+1;k++)
        {
            if(k>9)
            {
                 int reminder=k%10;
                printf("%d",reminder);
           
            }
            else
            {
                printf("%d",k);
            }
            
        }
       int h= g++;
        int result=2;
   
        for(j=result*i;j>=h;j--)
        {
            if(j>9)
            {
                int s=j%2;
                printf("%d",s);
                
            }
            else{
              printf("%d",j);
            }
            
        }
        
      
    
        printf("\n");
    }
    
}