//Rotate an array to the right by k positions.
#include<stdio.h>
int main()
{
    int b, k;
    printf("\nEnter the length of array: ");
    scanf("%d", &b);
    
    int a[b], new[b];
    printf("\nEnter %d elements for array: ", b);
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("\nEnter the value of k by which to rotate to right: ");
    scanf("%d", &k);

    k=k%b;

    for (int i = 0; i < b; i++)
    {
        new[(i+k)%b]=a[i];
    }
    
    printf("\nNew array is: ");
    for (int i = 0; i < b; i++)
    {
        printf("%d ", new[i]);
    }
    
}