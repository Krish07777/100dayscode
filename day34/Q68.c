//Delete an element from an array.
#include <stdio.h>
int main()
{
    int b, c, d;
    printf("\nEnter the size of array: ");
    scanf("%d", &b);

    int a[b];
    printf("\nEnter %d elements for array: ", b);
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the postion of element you want to delete: ");
    scanf("%d", &c);

    if (c > b - 1)
    {
        printf("\ndeletion not possible.\nInvalid Position!!!");
    }

    else
    {

        for (int i = c; i < b; i++)
        {
            a[i] = a[i + 1];
        }

        a[b - 1] = 0;
    }

    printf("\nElements of array are: ");
    for (int i = 0; i < b-1; i++)
    {
        printf("%d ", a[i]);
    }
}