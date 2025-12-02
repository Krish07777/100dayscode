//Write a program to check if a number is a perfect number.
#include<stdio.h>
int main()
{
    int a, b, c=0, d;
    printf("\nEnter the number: ");
    scanf("%d", &a);
    for (int i = 1; i < a; i++)
    {
        b=a%i;
        if (b==0)
        {
            c+=i;
        }
    }
    if (c==a)
    {
        printf("\n%d is a perfect number.", a);
    }
    else
    {
        printf("\n%d is not a perfect number.", a);
    }
}