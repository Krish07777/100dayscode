//Reverse a string.
#include<stdio.h>
int main()
{
    char str[100], str2[100], count=0;
    printf("\nEnter the string: ");
    scanf("%[^\n]", &str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        count++;
    }

    for (int i = count-1, j=0; i >= 0 && str[j]!=0; i--, j++)
    {
        str2[j]=str[i];
    }

    str2[count]='\0';
    
    printf("\nReverse string is %s", str2);
}