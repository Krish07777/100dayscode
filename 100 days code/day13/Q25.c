//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
int main()
{
    int a,b;
    char s;
    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);
    printf("\nChoose the respective symbol from (+,-,*,/,%%) to perform that function.");
    printf("\nEnter the symbol: ");
    scanf(" %c", &s);
    switch(s)
    {
        case '+': printf("\nAddition of given numbers is %d", a+b);
        break;
        case '-': printf("\nSubtraction of given numbers is %d", a-b);
        break;
        case '*': printf("\nMultiplication of given numbers is %d", a*b);
        break;
        case '/': printf("\nDivision of given numbers is %f", (a*1.0)/(b*1.0));
        break;
        case '%': printf("\nModulus of given numbers is %d", a%b);
        break;
        default: printf("\nEnter the valid symbol...");
    }
}