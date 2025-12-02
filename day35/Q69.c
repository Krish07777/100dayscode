//Find the second largest element in an array.
#include<stdio.h>
int main()
{
    int b, temp;
    printf("\nEnter the length of array: ");
    scanf("%d", &b);

    int a[b];
    printf("\nEnter %d elements for array: ", b);
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = b-1; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            if (a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    
    printf("\nSecond largest element of given array is %d", a[1]);
}