//Write a program to print numbers from 1 to n.
#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter the number to be printed to from 1 to entered number: ");
    scanf("%d", &a);
    for (int i=1; i<=a; i++)
    {
        printf("%d ", i);
    }
}