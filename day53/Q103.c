/*
Write a Program to take an array of integers as input, calculate the pivot index of this array. 
The pivot index is the index where the sum of all the numbers strictly to the left of the index 
is equal to the sum of all the numbers strictly to the index's right. If the index is on the left 
edge of the array, then the left sum is 0 because there are no elements to the left. This also 
applies to the right edge of the array. Print the leftmost pivot index. If no such index exists,
 print -1.
*/
#include<stdio.h>
int main()
{
    int arr[100], a, left=0, pivot=-1, total=0, right=0;
    printf("\nEnter the number of elments you wish to input: ");
    scanf("%d", &a);
    printf("\nEnter the value of %d elements: \n", a);
    for (int i = 0; i < a; i++)
    {
        printf("Element %d is: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < a; i++)
    {
        total+=arr[i];
    }

    printf("\nTotal: %d", total);
    
    for (int i = 0; i < a; i++)
    {
        right=total-left-arr[i];
        if (left==right)
        {
            pivot=i;
            break;
        }
        
        left+=arr[i];
    }

    if (pivot!=-1)
    {
        printf("\nThe pivot index for the given array is %d", pivot);
    }
    
    else
    {
        printf("\nNo pivot index found (-1)");
    }
    
}