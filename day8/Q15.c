//Write a program to input a inputacter and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special inputacter.
#include<stdio.h>
int main()
{
    char input;
    printf("Enter the value:  ");
    scanf("%c", &input);
    if(input>='A' && input<='Z')
    {
        printf("It is uppercase alphabet!!");
    }
    else if(input>='a' && input<='z')
    {
        printf("It is lowercase alphabet!!");
    }
    else if(input>='0' && input<='9')
    {
        printf("It is a digit!!!");
    }
    else
    {
        printf("It is a special character!!!!");
    }
}