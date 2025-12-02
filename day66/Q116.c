/*
Write a program to take an integer array nums which contains only positive integers,
and an integer target as inputs. The goal is to find two distinct indices i and j in
the array such that nums[i] + nums[j] equals the target. Assume exactly one solution
exists and return the indices in any order. Print the two indices separated by a space
as output. If no solution exists, print "-1 -1".
*/
#include <stdio.h>
int main()
{
    int nums[100], target, x = -1, y = -1, a;
    printf("\nNumber of character you want to enter: ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &nums[i]);
        if (nums[i] < 1)
        {
            printf("\nOnly positive integers are allowed!!!");
            return 0;
        }
    }

    printf("\nEnter the target element: ");
    scanf("%d", &target);

    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                x = i;
                y = j;
            }
        }
    }

    if (x > -1 && y > -1)
    {
        printf("\nThe required indices are %d and %d", x, y);
    }

    else
    {
        printf("\nNo such indices exists....: %d, %d", x, y);
    }
}