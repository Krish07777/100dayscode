//Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("\nEnter the value of b: ");
    scanf("%d", &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Inverted values are:\n a is %d and b is %d", a,b);
}