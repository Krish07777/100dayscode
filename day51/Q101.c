/*
Write a Program to take a sorted array(say nums[]) and an integer (say target)
as inputs. The elements in the sorted array might be repeated. You need to print
the first and last occurrence of the target and print the index of first and last
occurrence. Print -1, -1 if the target is not present.
*/
#include <stdio.h>
int main()
{
    int num[100], target, a, first = -1, last = -1, count = 0, temp=0;
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
        for (int j = i; j < count; j++)
        {
            if (num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
            
        }
        
        
    }
    

    printf("\nEnter the target element to search: ");
    scanf("%d", &target);

    for (int i = 0; i < a; i++)
    {
        if (count == 0)
        {
            if (num[i] == target)
            {
                first = i;
                count++;
            }
        }

        if (count != 0)
        {
            if (num[i] == target)
            {
                last = i;
            }
        }
    }

    if (first != -1 && last != -1)
    {
        printf("\nFirst occurence is %d and last occuerence is %d", first, last);
    }

    else
    {
        printf("\nNo such value exists!!!");
    }
    
}