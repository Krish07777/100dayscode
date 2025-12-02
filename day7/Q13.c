//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main()
{
    int year;
    printf("To check if the year is leap year or not.\n");
    printf("Enter the year: ");
    scanf("%d", &year);
    if(year%4==0 && !(year%100==0))
    {
        printf("Year is leap year.. :)");
    }
    else if(year%400==0)
    {
        printf("Year is leap year.. :)");
    }
    else
    {
        printf("Year is not a leap year.. :(");
    }
}