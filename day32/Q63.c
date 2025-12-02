//Merge two arrays.
#include<stdio.h>
int main()
{
    int i, j, k;
    printf("\nEnter the length of first array: ");
    scanf("%d", &i);
    
    int a[i];
    printf("\nEnter %d values for first array:\n", i);
    for (int x = 0; x <= i-1; x++)
    {
        scanf("%d", &a[x]);
    }

    printf("\nEnter the length of second array: ");
    scanf("%d", &j);
    
    int b[j];
    printf("\nEnter %d values for second array:\n", j);
    for (int x = 0; x <= j-1; x++)
    {
        scanf("%d", &b[x]);
    }
    
    k=i+j;
    int c[k];
    for (int x = 0; x < i; x++)
    {
        c[x]=a[x];
    }

    for (int x = 0; x < j; x++)
    {
        c[i]=b[x];
        i++;
    }
    
    printf("\nNew array is of length %d and has elements: ", k);
    for (int x = 0; x <= k-1; x++)
    {
        printf("%d ", c[x]);
    }
    
}