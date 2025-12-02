//Multiply two matrices.
#include<stdio.h>
int main()
{
    int x, y;
    printf("\nEnter rows and colums for matrix 1: ");
    printf("\nRows: ");
    scanf("%d", &x);
    printf("Columns: ");
    scanf("%d", &y);
    
    int a[x][y];
    printf("\nEnter the elemnets for matrix 1: \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("Enter value of a[%d %d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
        
    }

    int v, w;
    printf("\nEnter rows and colums of matrix 2: ");
    printf("\nRows: ");
    scanf("%d", &v);
    printf("Columns: ");
    scanf("%d", &w);
    
    int b[v][w];
    printf("\nEnter the elemnets for matrix 2: \n");
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < w; j++)
        {
            printf("Enter value of b[%d %d]: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
        
    }

    if (y!=v)
    {
        printf("\nNo. of columns of matrix 1 must be equal to no. of rows of matrix 2...");
        return 0;
    }
    
    int c[x][w];
    
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < w; j++)
        {
            c[i][j]=0;
        }
        
    }
    
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < w; j++)
        {
            for (int k = 0; k < y; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
            
        }
        
    }

    printf("\nMultiplication of matrix 1 and matrix 2 is: \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < w; j++)
        {
            printf("\nValue of c[%d %d] is %d", i+1, j+1, c[i][j]);
        }
        
    }
       
}