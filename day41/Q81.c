//Count characters in a string without using built-in length functions.
#include<stdio.h>
int main()
{
    char str[100], count=0;
    printf("\nEnter the string: ");
    scanf("%[^\n]", &str);
    printf("\nThe string is %s", str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        count++;
    }
    
    printf("\nNumber of characters in string is %d", count);
}