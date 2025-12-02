//Reverse an array without taking extra space.
#include<stdio.h>
int main()
{
    int i, temp;
    printf("\nEnter the length of array: ");
    scanf("%d", &i);
    
    int a[i];
    printf("\nEnter %d values for array:\n", i);
    for (int b = 0; b <= i-1; b++)
    {
        scanf("%d", &a[b]);
    }
    
    int c=i-1;
    for (int b = 0; b < c; b++)
    {
       temp=a[b];
       a[b]=a[c];
       a[c]=temp;
       c--; 
    }

    printf("\nReverse of given array is: ");
    for (int b = 0; b < i; b++)
    {
        printf("%d ", a[b]);
    }
    
}