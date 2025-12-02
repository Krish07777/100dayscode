/*
Write a program to take two sorted arrays of size m and n as input.
Merge both the arrays such that the merged array is also sorted. Print the merged array.
*/
#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], arr3[100], m, n, c, temp = 0;
    printf("\nEnter the size of array1: ");
    scanf("%d", &m);
    printf("Enter elements for array1: \n");
    for (int i = 0; i < m; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < m; j++)
        {
            if (arr1[i] > arr1[j])
            {
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }

    printf("\nEnter the size of array2: ");
    scanf("%d", &n);
    printf("Enter elements for array2: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr2[i] > arr2[j])
            {
                temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }

    c = m + n;
    for (int i = 0; i < c; i++)
    {
        if (i < m)
        {
            arr3[i] = arr1[i];
        }

        else
        {
            arr3[i] = arr2[i-m];
        }
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = i; j < c; j++)
        {
            if (arr3[i] > arr3[j])
            {
                temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }

    printf("\nNew merged and sorted array is: ");
    for (int i = 0; i < c; i++)
    {
        printf("%d ",arr3[i]);
    }
}