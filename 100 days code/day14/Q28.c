//Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main()
{
    int a, b=1;
    printf("\nEnter the value of n: ");
    scanf("%d", &a);
    printf("\nEven digits from 1 to %d are: ", a);
    for(int i=1; i<=a; i++)
    {
        if(i%2==0)
        {
            printf("%d*", i);
            b *= i;
        }
    }
    printf("\nProduct of even numbers from 1 to %d is %d", a, b);
}