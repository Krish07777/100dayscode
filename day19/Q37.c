//Write a program to find the LCM of two numbers.
#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("\nEnter the first number: ");
    scanf("%d", &a);
    printf("\nEnter the second number: ");
    scanf("%d", &b);
    d=a*b;
    while (b>0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    printf("\nLCM is %d", d/a);
}