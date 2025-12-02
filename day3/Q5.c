//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
    int temp;
    printf("To convert temperature from celsius to fahrenheit!!!\n");
    printf("Enter the temperature in celsius: ");
    scanf("%d", &temp);
    printf("Temperature in fahrenheit is %f", (temp*1.8)+32);
}