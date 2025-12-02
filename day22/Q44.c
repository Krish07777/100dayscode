//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include<stdio.h>
int main()
{
    int n;
    float a, b=0, c;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        a=((2*i)-1)*1.0/(2*i)*1.0;
        b+=a;
    }
    c=1+b;
    printf("\nThe approx sum is %.1f", c);
}