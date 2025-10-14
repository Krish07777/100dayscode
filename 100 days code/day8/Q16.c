//Write a program to input three numbers and find the largest among them using if–else
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter the first number: ");
    scanf("%d", &a);
    printf("\nEnter the second number: ");
    scanf("%d", &b);
    printf("\nEnter the third number: ");
    scanf("%d", &c);
    if(a>b && a>c)
    {
        printf("The first number %d is greatest of all!!", a);
    }
    else if(b>a && b>c)
    {
        printf("The second number %d is greatest of all!!", b);
    }
    else if(c>a && c>b)
    {
        printf("The third number %d is greatest of all!!", c);
    }
}