//Add two matrices.
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
    int b[x][y];
    int c[x][y];
    printf("\nEnter the elemnets for matrix 1: \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("Enter value of a[%d %d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
        
    }

    printf("\nEnter the elemnets for matrix 2: \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("Enter value of b[%d %d]: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
        
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        
    }
    
    printf("\nNew added Matrix is: ");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("\nValue of c[%d %d] is %d", i+1, j+1, c[i][j]);
        }
        
    }
    
}