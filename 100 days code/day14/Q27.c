//Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main()
{
    int a, b=0;
    printf("\nEnter the number to which sum will be printed:");
    scanf("%d", &a);
    printf("\nFirst %d odd numbers are: ", a);
    for(int i=1; i<=a; i++)
    {
        printf("%d ", 2*i-1);
        b += (2*i)-1;
    }
    printf("\nsum of first n odd numbers is: %d", b);
}