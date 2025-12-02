//Find the transpose of a matrix.
#include<stdio.h>
int main()
{
    int x, y, temp;
    printf("\nEnter rows and colums of Matrix: ");
    printf("\nRows: ");
    scanf("%d", &x);
    printf("Columns: ");
    scanf("%d", &y);
    
    int a[x][y];
    int b[y][x];
    printf("\nEnter the elemnets for matrix: \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("Enter value of a[%d %d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
        
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            b[j][i]=a[i][j];
        }
        
    }
    
    printf("\nTranspose of matrix is: ");
    for (int j = 0; j < y; j++)
    {
        for (int i = 0; i < x; i++)
        {
            printf("\nValue of b[%d %d] is %d", j+1, i+1, b[j][i]);
        }
        
    }
}