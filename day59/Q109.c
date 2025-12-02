/*
Write a program to take an integer array arr and an integer k as inputs.
Print the maximum sum of all the subarrays of size k.
*/
#include <stdio.h>
int main()
{
    int arr[100], k, a, sum = 0, maxsum = 0;
    printf("\nNumber of elements you want to enter: ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the size of subarray: ");
    scanf("%d", &k);

    if (k > a)
    {
        printf("\nThe length of subarray can not be greater then array!!!");
        return 0;
    }

    for (int i = 0; i <= a - k; i++)
    {
        sum = 0;
        for (int j = i; j < i + k; j++)
        {
            sum += arr[j];
        }

        if (sum > maxsum)
            maxsum = sum;
    }

    printf("\nMaximum sum of subarray of size %d is: %d\n", k, maxsum);
    
    return 0;
}