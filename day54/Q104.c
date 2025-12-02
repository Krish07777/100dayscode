/*
Write a Program to take a positive integer n as input, and find the pivot 
integer x such that the sum of all elements between 1 and x inclusively 
equals the sum of all elements between x and n inclusively. Print the pivot 
integer x. If no such integer exists, print -1. Assume that it is guaranteed 
that there will be at most one pivot integer for the given input.
*/
#include<stdio.h>
int main()
{
    int pivot=-1, num, left=0, right=0, total=0;
    printf("\nEnter a positive number: ");
    scanf("%d", &num);
    if (num<1)
    {
        printf("\nOnly Positive integer allowed!!!");
        return 0;
    }
    
    for (int i = 1; i <= num; i++)
    {
        total+=i;
    }
    
    printf("\nTotal: %d", total);
    for (int i = 1; i <= num; i++)
    {
        right=total-left-i;
        if (left==right)
        {
            pivot=i;
            break;
        }
        
        left+=i;
    }
    
    if (pivot!=-1)
    {
        printf("\nThe pivot integer is %d", pivot);
    }

    else
    {
        printf("\nNo pivot integer exists (-1)");
    }
    
}