//Write a program to check if a number is prime.
#include<stdio.h>
int main()
{
    int a, count=0;
    printf("\nEnter the number: ");
    scanf("%d", &a);
    for (int i = 2; i < a; i++)
    {
        if (a%i==0)
        {
            count++;
            break;
        }
    }
    if (count>0)
    {
        printf("\nIt is not a prime number.");
    }
    else
    {
        printf("\nPrime");
    }
}