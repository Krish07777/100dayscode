//Write a program to print all the prime numbers from 1 to n.
#include<stdio.h>
int main()
{
    int a, count;
    printf("\nEnter the number: ");
    scanf("%d", &a);
    printf("\nThe prime numbers are:\n");
    for (int i = 1; i <= a; i++)
    {
        count=0;
        for (int j = 1; j <= i; j++)
        {
            if (i%j==0)
            {
                count++;
            }
            
        }

        if (count<=2)
            {
                printf("%d ", i);
            }
        
    }
    
}