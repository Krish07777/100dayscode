//Write a program to find the HCF (GCD) of two numbers.
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("\nEnter the first number: ");
    scanf("%d", &a);
    printf("\nEnter the second number: ");
    scanf("%d", &b);
    while (b>0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    printf("\nHCF is %d", a);
}