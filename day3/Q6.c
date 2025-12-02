//Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("\nEnter the value of b: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("Inverted values are:\n a is %d and b is %d", a,b);
}