//Write a program to check if a number is an Armstrong number.
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, count=0, last=0, sum=0;
    printf("Enter the number: ");
    scanf("%d", &a);
    b=a;
    c=a;
    while(a>0)
    {
        a = a/10;
        count++;
    }
    while (b>0)
    {
        last = b%10;
        b = b/10;
        sum += (int)(pow(last, count)+0.5);
    }
    if (c==sum)
    {
        printf("\nThe number is armstrong number.");
    }
    else
    {
        printf("\nIt is not armstrong number.");
    }
}