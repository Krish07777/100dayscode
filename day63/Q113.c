/*
Write a program to take an integer array arr and an integer k as inputs. The task
is to find the kth smallest element in the array. Print the kth smallest element as output.
*/
#include <stdio.h>
int main()
{
    int arr[100], k, a, min, temp;
    printf("\nNumber of elements you want to enter: ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the value of k: ");
    scanf("%d", &k);

    for (int i = 0; i < a; i++)
    {
        for (int j = i; j < a; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    min=arr[k-1];

    printf("\nThe %dth smallest element in array is: %d", k, min);
}