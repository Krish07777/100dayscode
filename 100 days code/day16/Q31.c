//Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
int main()
{
    int a, b, c=0, d=1;
    printf("\nEnter the number: ");
    scanf("%d", &a);
    while (a>0)
    {
        b=a%2;
        c=c+b*d;
        a=a/2;
        d=d*10;
    }
    printf("\nThe binary representation is %d", c);
}