#include<stdio.h>
int main()
{
    int arr[]={10,20,30,101,50,202};
    int i;
    for(i=0;i<6;i++)
    {
        int s=arr[i];
       int  n=0;
        while (s!=0)
        {
            int r=s%10;
            n=n*10+r;
            s=s/10;

            
        }
        if(n==arr[i])
        {
            printf("%d \t",n);
        }
        
    }
}