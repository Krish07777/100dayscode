//Write a program to find the sum of digits of a number.
#include<stdio.h>
int main()
{
    int a, b, sum=0;
    printf("\nEnter the number: ");
    scanf("%d", &a);
    while (a>0)
    {
        b=a%10;
        a=a/10;
        sum +=b;
    }
    printf("\nThe sum is %d", sum);
}