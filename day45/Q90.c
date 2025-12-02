//Toggle case of each character in a string.
#include<stdio.h>
int main()
{
    char str[100], ch;
    printf("\nEnter the string: ");
    scanf("%[^\n]", &str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        ch=str[i];
        if (ch>='a' && ch<='z')
        {
            str[i]=str[i]-32;
        }
        
        else if (ch>='A' && ch<='Z')
        {
            str[i]=str[i]+32;
        }
        
    }

    printf("\nToggled string is %s", str);
}