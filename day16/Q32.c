//Write a program to check if a number is a palindrome.
#include<stdio.h>
int main()
{
    int a, b, num, sum=0;
    printf("\nEnter the number: ");
    scanf("%d", &a);
    b=a;
    while (a>0)
    {
        num=a%10;
        sum=sum*10+num;
        a=a/10;
    }
    if (b==sum)
    {
        printf("\nThe number is Palindrome.");
    }
    else
    {
        printf("\nThe number is not a palindrome.");
    }
}