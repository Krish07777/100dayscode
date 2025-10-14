//Write a program to reverse a given number.
#include<stdio.h>
int main()
{
    int a, b=0, c;
    printf("Enter the number to be reversed: ");
    scanf("%d", &a);
    while(a>0)
    {
        c = a%10;
        b = b*10+c;
        a = a/10;
    }
    printf("\nReversed number is %d", b);
}