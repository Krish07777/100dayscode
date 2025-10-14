//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main()
{
    int sec, min, hour, rem, rem2;
    printf("Conversion of seconds in hours:minutes:seconds format:\n");
    printf("Enter the number of seconds:  ");
    scanf("%d", &sec);
    min=sec/60;
    rem=sec%60;
    printf("\nProvided output is %d minutes and %d seconds", min, rem);
    if (min>60)
    {
        hour=min/60;
        rem2=min%60;
        printf("\nDesired output is %d hours %d minutes %d seconds", hour, rem2, rem);
    }
}