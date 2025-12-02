/*
Write a Program to take a sorted array arr[] and an integer x as input, 
find the index (0-based) of the smallest element in arr[] that is greater 
than or equal to x and print it. This element is called the ceil of x. 
If such an element does not exist, print -1. Note: In case of multiple 
occurrences of ceil of x, return the index of the first occurrence.
*/
#include<stdio.h>
int main()
{
    int num[100], target, a, result=-1, ceil=0, temp=0, low, high, mid;
    printf("\nEnter the size of array: ");
    scanf("%d", &a);
    printf("\nEnter %d elements for array: \n", a);
    for (int i = 0; i < a; i++)
    {
        printf("Element %d is: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = i; j < a; j++)
        {
            if (num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
            
        }
        
    }

    low=0;
    high=a-1;

    printf("\nEnter the integer: ");
    scanf("%d", &target);
    
    while (low<=high)
    {
        mid=low+(high-low)/2;
        if (num[mid]>=target)
        {
            ceil=num[mid];
            result=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        
    }
    
    
    if (result!=-1)
    {
        printf("\nSmallest number greater then %d is %d which is at index %d.", target, ceil, result);
    }
    else
    {
        printf("\nNo number greater then %d found so output is -1", target);
    }
    
    
}