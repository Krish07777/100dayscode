//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += (2.0*i)/(3.0+4.0*(i-1.0));
    }
    printf("\nApproximate sum is %.2f", sum);
}