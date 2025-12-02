//Write a program to swap the first and last digit of a number.
#include<stdio.h>
int main()
{
    int a, first, last, count=0, b, c, d=1, num;
    printf("\nEnter the number: ");
    scanf("%d", &a);
    c=a;
    last=a%10;
    while (a>0)
    {
        first=a%10;
        a=a/10;
        count++;
    }
    for (int i = 1; i < count; i++)
    {
        d*=10;
    }
    c=c/10;
    num=c*10+first;
    num=num-first*d;
    num=num+last*d;
    printf("\nThe number is %d", num);
}