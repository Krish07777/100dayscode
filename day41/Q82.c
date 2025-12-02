//Print each character of a string on a new line.
#include<stdio.h>
int main()
{
    char str[100];
    printf("\nEnter the string: ");
    scanf("%[^\n]", &str);
    printf("The characters of each strings are: \n");
    for (int i = 0; str[i]!='\0'; i++)
    {
        putchar(str[i]);
        printf("\n");
    }
    
}