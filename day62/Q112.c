/*
Write a program to take an integer array arr as input. The task is to 
find the maximum sum of any contiguous subarray using Kadane's algorithm. 
Print the maximum sum as output. If all elements are negative, print the 
largest (least negative) element.
*/
#include<stdio.h>
int main()
{
    int arr[100], a;
    printf("\nNumber of elements you want to enter: ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    int maxSum=arr[0], curSum=arr[0];

    for (int i = 1; i < a; i++)
    {
        if (curSum+arr[i]>arr[i])
        {
            curSum=curSum+arr[i];
        }

        else
        {
            curSum=arr[i];
        }
        
        if (curSum>maxSum)
        {
            maxSum=curSum;
        }
        
    }

    printf("\nThe maximum subarray sum is: %d", maxSum);
    
}