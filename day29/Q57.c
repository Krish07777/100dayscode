//Find the sum of array elements.
#include<stdio.h>
int main()
{
    int i, c, sum=0;
    printf("\nEnter the length of array: ");
    scanf("%d", &i);
    
    int a[i];
    printf("\nEnter %d values for array:\n", i);
    for (int b = 0; b <= i-1; b++)
    {
        scanf("%d", &a[b]);
    }
    
    for (int b = 0; b <= i-1; b++)
    {
        sum+=a[b];
    }
    
    printf("\nSum of all elements of array is %d", sum);
}