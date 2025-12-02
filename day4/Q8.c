//Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main()
{
    int n, sum;
    printf("To find sum of first n natural numbers\n");
    printf("Enter the value of n: ");
    scanf("%d", &n);
    sum = n*(n+1)/2;
    printf("Sum of first %d natural numbers is %d", n, sum);
}