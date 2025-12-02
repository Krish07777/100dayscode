//Write a program to display the month name and number of days using switch-case for a given month number.
#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter the number from (1-12) to identify month name: ");
    scanf("%d", &a);
    switch(a)
    {
        case 1: printf("\nThe month is January and it has 31 days!");
        break;
        case 2: printf("\nThe month is February and it has 28 days and 29 days in a leap year!");
        break;
        case 3: printf("\nThe month is March and it has 31 days!");
        break;
        case 4: printf("\nThe month is April and it has 30 days!");
        break;
        case 5: printf("\nThe month is May and it has 31 days!");
        break;
        case 6: printf("\nThe month is June and it has 30 days!");
        break;
        case 7: printf("\nThe month is July and it has 31 days!");
        break;
        case 8: printf("\nThe month is August and it has 31 days!");
        break;
        case 9: printf("\nThe month is September and it has 30 days!");
        break;
        case 10: printf("\nThe month is October and it has 31 days!");
        break;
        case 11: printf("\nThe month is November and it has 30 days!");
        break;
        case 12: printf("\nThe month is December and it has 31 days!");
        break;
        default: printf("\nEnter the value in the given range of (1-12) only!!!!");
    }
    printf("\nSwitch Ended!!");
}