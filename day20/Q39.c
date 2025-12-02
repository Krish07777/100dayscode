//Write a program to find the product of odd digits of a number.
#include<stdio.h>
int main()
{
    int a, b, product=1;
    printf("\nEnter the number: ");
    scanf("%d", &a);
    while (a>0)
    {
        b=a%10;
        if (b%2!=0)
        {
            product*=b;
        }
        a=a/10;
    }
    printf("\nThe product is %d", product);
}