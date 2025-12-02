//Find the sum of main diagonal elements for a square matrix.
#include<stdio.h>
int main()
{
    int x, y, sum=0;
    printf("\nEnter rows and columns for matrix: ");
    printf("\nRows: ");
    scanf("%d", &x);
    printf("Columns: ");
    scanf("%d", &y);
    if (x!=y)
    {
        printf("\nEnter a valid square matrix!!!");
        return 0;
    }
    
    int a[x][y];
    int d[x];
    printf("\nEnter the elements for matrix: \n");
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
        d[i]=a[i][i];
        sum+=d[i];
    }
    
    printf("\nSum of diagonal elements is %d", sum);
}
