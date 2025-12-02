/*
Write a program to take an input array of size n. The array should contain 
all the integers between 0 to n except for one. Print that missing number
*/
#include<stdio.h>
int main()
{
    int arr[100], n, cur_sum=0, act_sum=0, missing;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    printf("\nEnter %d elements (from 0 to %d: except for one)\n", n, n);
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
        cur_sum+=arr[i];
    }

    act_sum=n*(n+1)/2;
    missing=act_sum-cur_sum;
    printf("\nMissing number is %d", missing);
}