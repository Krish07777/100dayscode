//Read and print a matrix.
#include<stdio.h>
int main()
{
    int x, y;
    printf("\nEnter rows and colums of Matrix: ");
    printf("\nRows: ");
    scanf("%d", &x);
    printf("Columns: ");
    scanf("%d", &y);
    
    int a[x][y];
    printf("\nEnter the elemnets for matrix: \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("Enter value of a[%d %d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
        
    }
    
    printf("\nEntered elements of matrix are: ");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("\nValue of a[%d %d] is %d", i+1, j+1, a[i][j]);
        }
        
    }
    
}