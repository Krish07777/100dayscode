//Write a program to check if a number is a strong number.
#include<stdio.h>
int main()
{
    int a, b, c, d, e=0;
    printf("\nEnter the number: ");
    scanf("%d", &a);
    d=a;
    while (a>0)
    {
        c=1;
        b=a%10;
        for (int i = 1; i <= b; i++)
        {
            c*=i;
        }
        e+=c;
        a=a/10;
    }
    if (e==d)
    {
        printf("\n%d is a strong number.", d);
    }
    else
    {
        printf("\n%d is not a strong number.", d);
    }
}