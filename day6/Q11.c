//Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the integer to check if its even or odd:  ");
    scanf("%d", &a);
    if(a%2==0)
    printf("The entered integer is even");
    else
    printf("The entered integer is odd");
}