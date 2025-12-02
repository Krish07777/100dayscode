//Search in a sorted array using binary search.
#include <stdio.h>
int main()
{
    int b, c, temp, key, low, high, mid, found=0;
    printf("\nEnter the length of array: ");
    scanf("%d", &b);
    int a[b];
    printf("\nEnter %d elements for array: ", b);
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < b; i++)
    {
        for (int j = i; j < b; j++)
        {
            if (a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }

    printf("\nSorted array is: ");
    for (int i = 0; i < b; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nEnter the number to search: ");
    scanf("%d", &key);

    low=0;
    high=b-1;

    while (low<=high)
    {
        mid=(low+high)/2;
        if (a[mid]==key)
        {
            found=1;
            printf("\nThe element %d is in array at index %d.", key, mid);
            break;
        }

        else if (a[mid]<key)
        {
            low=mid+1;
        }
        
        else
        {
            high=mid-1;
        }
    }
    
    if (!found)
    {
        printf("\nThe element %d is not present in the array.", key);
    }
    
    
}