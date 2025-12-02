//Count positive, negative, and zero elements in an array.
#include<stdio.h>
int main()
{
    int i, positive=0, negative=0, zero=0;
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
        if (a[b]>0)
        {
            positive++;
        }
        else if (a[b]<0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
        
    }
    printf("\nNumber of positive elements is %d", positive);
    printf("\nNumber of negative elements is %d", negative);
    printf("\nNumber of Zero elements is %d", zero);

}