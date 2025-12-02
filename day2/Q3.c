//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the length of rectangle: ");
    scanf("%d", &a);
    printf("Enter the breadth of rectangle: ");
    scanf("%d", &b);
    printf("\nArea of rectangle is: %d", a*b);
    printf("\nPerimeter of rectangle is: %d", 2*(a+b));
}