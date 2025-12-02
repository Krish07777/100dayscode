/*
Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the maximum element in each subarray of size k moving 
from left to right. Print the maximum elements for each window separated 
by spaces as output.
*/
#include<stdio.h>
int main()
{
    int arr[100], k, a, max = 0, maxsum = 0;
    printf("\nNumber of elements you want to enter: ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the size of subarray: ");
    scanf("%d", &k);

    if (k>a)
    {
        printf("\nThe soze of subarray can not be greater then array!!!");
        return 0;
    }

    printf("\nRequired Elements are: ");
    
    for (int i = 0; i <= a - k; i++)
    {
        for (int j = i; j < i + k; j++)
        {
            if (max<arr[j])
            {
                max=arr[j];
            }
            
        }

        printf("%d ", max);
    }

}