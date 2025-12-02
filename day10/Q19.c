//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main()
{
    int a,b,c, max;
    printf("\nEnter the first side of triagle: ");
    scanf("%d", &a);
    printf("\nEnter the second side of triagle: ");
    scanf("%d", &b);
    printf("\nEnter the third side of triagle: ");
    scanf("%d", &c);
    if(a+b>c && a+c>b && b+c>a)
    {
        printf("\nIt is a valid triangle!!");
        if(a==b && a==c)
        {
            printf("\nIt is an equilateral triangle.");
        }
        else if(a==b)
        {
            printf("\nIt is an isosceles triangle.");
        }
        else if(a==c)
        {
            printf("\nIt is an isosceles triangle.");
        }
        else if(b==c)
        {
            printf("\nIt is an isosceles triangle.");
        }
        else
        {
            printf("\nIt is a scalene triangle.");
        }
    }
    else
    {
        printf("It is not a valid triangle...");
    }
    if(a>b && a>c) max=a;
    else if(b>c) max=b;
    else max=c;
    if(max==a && a*a==b*b+c*c)
    {
        printf("\nIt is a right angle triangle.");
    }
    else if(max==b && b*b==a*a+c*c)
    {
        printf("\nIt is a right angle triangle.");
    }
    else if(max==c && c*c==a*a+b*b)
    {
        printf("\nIt is a right angle triangle.");
    }
    else
    {
        printf("\nIt is not a right angle triangle.");
    }
}