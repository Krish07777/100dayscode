//Insert an element in a sorted array at the appropriate position.
#include<stdio.h>
int main()
{
    int a[100], b, temp, key, c;
    printf("\nEnter the number of elements you want to enter: ");
    scanf("%d", &b);
    printf("\nEnter value of %d elements for array: ", b);
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

    printf("\nEnter the value of new element: ");
    scanf("%d", &key);

    c=b-1;
    while (c>=0 && a[c]>key)
    {
        a[c+1]=a[c];
        c--;
    }

    a[c+1]=key;

    printf("\nNew sorted array is: ");
    for (int i = 0; i < b+1; i++)
    {
        printf("%d ", a[i]);
    }
    
    
}