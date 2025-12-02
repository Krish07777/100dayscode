// Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main()
{
    int x, y, count = 0, p, q;
    printf("\nEnter rows and colums of Matrix: ");
    printf("\nRows: ");
    scanf("%d", &x);
    printf("Columns: ");
    scanf("%d", &y);

    int a[x][y];
    int d[x];
    printf("\nEnter the elements for matrix: \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("Enter value of a[%d %d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < x; i++)
    {
        d[i] = a[i][i];
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (d[i] == d[i + 1])
            {
                count = 1;
                break;
            }
        }

        if (count)
        {
            break;
        }
        
    }

    if (count)
    {
        printf("\nElements at diagonals are not distinct!!!");
    }

    else
    {
        printf("\nElements at diagonals are distinct!!!");
    }
}