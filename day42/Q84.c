//Convert a lowercase string to uppercase without using built-in functions.
#include<stdio.h>
int main()
{
    char str[100], str2[100], count=0, ch;
    printf("\nEnter the string: ");
    scanf("%[^\n]", &str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]>='a'&& str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        
    }

    printf("\nThe new string is %s", str);
}