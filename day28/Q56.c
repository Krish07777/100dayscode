//Read and print elements of a one-dimensional array.
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
    
    printf("\nThe values for array are: \n");
    for (int b = 0; b <= i-1; b++)
    {
        printf("%d ", a[b]);
    }
    
}