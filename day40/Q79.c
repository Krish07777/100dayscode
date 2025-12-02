//Perform diagonal traversal of a matrix.
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

    for (int k = 0; k < x+y-1; k++)
    {
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if (i+j==k)
                {
                    printf("%d ", a[i][j]);
                }
                
            }
            
        }
        
    }
    
}