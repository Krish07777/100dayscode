//Count even and odd numbers in an array.
#include<stdio.h>
int main()
{
    int i, even=0, odd=0;
    printf("\nEnter the length of array: ");
    scanf("%d", &i);
    
    int a[i];
    printf("\nEnter %d values for array:\n", i);
    for (int b = 0; b <= i-1; b++)
    {
        scanf("%d", &a[b]);
    }
    
    for (int b = 0; b <= i-1; b++)
    {
        if (a[b]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        
    }

    printf("\nEven numbers are %d", even);
    printf("\nOdd numbers are %d", odd);
}