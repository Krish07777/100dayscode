//Find the digit that occurs the most times in an integer number.
#include<stdio.h>
int main()
{
    int a, b, c, count=0, max, e;
    int freq[10]={0};
    printf("\nEnter the number: ");
    scanf("%d", &a);
    b=a;
    while (a>0)
    {
        a=a/10;
        count++;
    }
    
    int x[count];
    for (int i = count-1; i >= 0; i--)
    {
        c=b%10;
        b=b/10;
        x[i]=c;
    }

    printf("Values of array are:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", x[i]);
    }

    for (int i = 0; i < count; i++)
    {
        freq[x[i]]++;
    }
    
    max=0;
    for (int i = 0; i < 10; i++)
    {
        if (max<freq[i])
        {
            max=freq[i];
            e=i;
        }
        
    }

    printf("\nInteger with highest count is %d with count %d.", e, max);
}