//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main()
{
    int a;
    printf("To check if the number is negative, positive or zero");
    printf("\nEnter the number:  ");
    scanf("%d", &a);
    if(a>0)
    printf("The number is positive.");
    else if(a<0)
    printf("The number is negative.");
    else
    printf("The number is ZERO!!!");
}