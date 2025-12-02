//Find the sum of each row of a matrix and store it in an array.
#include<stdio.h>
int main()
{
    int x, y, sum=0;
    printf("\nEnter rows and colums of Matrix: ");
    printf("\nRows: ");
    scanf("%d", &x);
    printf("Columns: ");
    scanf("%d", &y);
    
    int a[x][y];
    int b[x];
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
        b[i]=0;
        for (int j = 0; j < y; j++)
        {
            b[i]+=a[i][j];
        }
        
    }

    for (int i = 0; i < x; i++)
    {
        printf("\nSum of row %d: %d", i+1, b[i]);
    }
    
}