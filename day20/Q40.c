//Write a program to find the 1’s complement of a binary number and print it.
#include<stdio.h>
int main()
{
    int a, b, c=0, d=1;
    printf("\nEnter the binary number: ");
    scanf("%d", &a);
    while (a>0)
    {
        b=a%10;
        b=1-b;
        c=c+b*d;
        a=a/10;
        d=d*10;
    }
    printf("\nComplement is %d", c);
}