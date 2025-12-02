// Insert an element in an array at a given position.
#include <stdio.h>
int main()
{
    int a[100], b, pos, key;
    printf("\nEnter the number of elements you want to enter: ");
    scanf("%d", &b);
    printf("\nEnter value of %d elements for array: ", b);
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the value of new element: ");
    scanf("%d", &key);
    printf("\nEnter the position for new element: ");
    scanf("%d", &pos);

    if (pos > b)
    {
        printf("\nEnter appropriate position!!!");
    }

    else
    {
        for (int i = b; i > pos - 1; i--)
        {
            a[i] = a[i - 1];
        }

        a[pos - 1] = key;

        printf("\nNew array is: ");
        for (int i = 0; i < b + 1; i++)
        {
            printf("%d ", a[i]);
        }
    }
}