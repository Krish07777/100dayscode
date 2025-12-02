//Check if a matrix is symmetric.
#include<stdio.h>
int main()
{
    int x, y, count=0;
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

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (a[i][j]!=a[j][i])
            {
                count++;
                break;
            }
            
        }
        
    }
    
    if (count>0)
    {
        printf("\nMatrix is not symmetric!!");
    }

    else
    {
        printf("\nMatrix is symmetric");
    }
    
    
}