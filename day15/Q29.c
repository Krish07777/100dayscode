//Write a program to calculate the factorial of a number.
#include<stdio.h>
int main()
{
    int a, b=1;
    printf("Enter the number to find factorial of: ");
    scanf("%d", &a);
    for(int i=a; i>=1; i--)
    {
        b *= i;
    }
    printf("\nFactorial of number %d is %d!", a, b);
}