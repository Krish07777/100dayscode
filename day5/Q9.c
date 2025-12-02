//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t;
    printf("\nEnter the principle amount: ");
    scanf("%d", &p);
    printf("\nEnter the rate of interest: ");
    scanf("%d", &r);
    printf("\nEnter the time period: ");
    scanf("%d", &t);
    printf("\nThe simple interest for the given values is %f", (p*r*t)/100.0);
    printf("\nThe compound interest for the given values is %f", p*(pow(1+r/100.0,t))-p);
}