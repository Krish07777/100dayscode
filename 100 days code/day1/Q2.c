//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
    int a,b;
    float div;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    div=(float)a/b;
    printf("\nAddition of two numbers is: %d",a+b);
    printf("\nSubtraction of two numbers is: %d",a-b);
    printf("\nMultiplication of two numbers is: %d",a*b);
    if(b==0)
    printf("\nDenominator is 0, not valid");
    else
    printf("\nDivision of two numbers is: %f",div);
}
