//Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float z1, z2, d;
    printf("\nEnter the coefficient of x^2: ");
    scanf("%d", &a);
    printf("\nEnter the coefficient of x: ");
    scanf("%d", &b);
    printf("\nEnter the constant: ");
    scanf("%d", &c);
    d=(b*b)-(4*a*c);
    if (d>0)
    {
        z1=(-b+ sqrt(d))/(2*a);
        z2=(-b- sqrt(d))/(2*a);
        printf("Roots of the given quadratic equation are real and different.\n");
        printf("Roots are %f and %f", z1, z2);
    }
    else if(d==0)
    {
        z1=-b/(2*a);
        printf("Roots of the given quadratic equation are real and same.\n");
        printf("Roots are %f and %f", z1, z1);
    }
    else
    {
        printf("Roots of the given quadratic equation are complex.\n");
    }
}