#include<stdio.h>
int main()
{
    int arr[]={10,20,12,40,50};
    int i,largest,second_largest;
    for(i=0;i<5;i++)
    {
        printf("%d \t",arr[i]);
    }
    printf(" \n print the second largest \n");
    largest=second_largest=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]>largest)
        {
          second_largest=largest;
          largest=arr[i];
        }
        else if(arr[i]>second_largest)
        {
            second_largest=arr[i];

        }

    }
    printf("%d \t%d",largest,second_largest);
}