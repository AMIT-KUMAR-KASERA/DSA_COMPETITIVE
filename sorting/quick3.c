// using recursion
#include <stdio.h>
void quicksort(int ar[], int first, int last);
int main()
{
    int a[50], i, n;
    printf("enter total values stored into array : \n");
    scanf("%d", &n);
    printf("enter %d values :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("original list is :  \n");
    for (i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
    quicksort(a, 0, n - 1);
    printf("\n sortest list is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
    return 0;
}
void quicksort(int arr[], int first, int last)
{
    int pivot, i, r, temp, j;

    if (first < last)
    {
        pivot = first;
        i = first + 1;
        j = last;
        while (i < j)
        {
            while (arr[i] <= arr[pivot] && i <= last)
                i++;
            while (arr[j] > arr[pivot] && j >= first)
                j--;
            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            temp = arr[pivot];
            arr[pivot] = arr[j];
            arr[j] = temp;
           
        }

         quicksort(arr, first, j - 1);
        quicksort(arr, j + 1, last);
    }
}
