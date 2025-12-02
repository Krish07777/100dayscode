//Search for an element in an array using linear search.
#include<stdio.h>
int main()
{
    int i, x, y=0;
    printf("\nEnter the length of array: ");
    scanf("%d", &i);
    
    int a[i];
    printf("\nEnter %d values for array:\n", i);
    for (int b = 0; b <= i-1; b++)
    {
        scanf("%d", &a[b]);
    }

    printf("\nEnter the number to find: ");
    scanf("%d", &x);

    for (int b = 0; b < i-1; b++)
    {
        if (a[b]==x)
        {
            printf("\n%d found in array at index %d", x, b);
            y++;
            break;
        }
    }
    
    if (y==0)
    {
        printf("%d is not in array", x);
    }
    
}