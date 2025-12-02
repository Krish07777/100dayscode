//Find the maximum and minimum element in an array.
#include<stdio.h>
int main()
{
    int i;
    printf("\nEnter the length of array: ");
    scanf("%d", &i);
    
    int a[i];
    printf("\nEnter %d values for array:\n", i);
    for (int b = 0; b <= i-1; b++)
    {
        scanf("%d", &a[b]);
    }
    
    int min=a[0];
    int max=a[0];
    for (int b = 0; b <= i-1; b++)
    {
        if (a[b]<min)
        {
            min=a[b];
        }
        if (a[b]>max)
        {
            max=a[b];
        }
        
    }

    printf("\nThe minimum value is: %d", min);
    printf("\nThe maximum value is: %d", max);
}