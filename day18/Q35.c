//Write a program to print all factors of a given number.
#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter the number: ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if(a%i==0)
        {
            printf("\n%d is the factor of %d", i, a);
        }
    }
    
}