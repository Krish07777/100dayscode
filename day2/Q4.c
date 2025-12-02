//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
    int a;
    float area, circ;
    printf("Enter the radius of circle: ");
    scanf("%d", &a);
    area=3.14*a*a;
    circ=2*3.14*a;
    printf("\nArea of given circle is: %f",area);
    printf("\nCircumference of given circle is: %f", circ);
}