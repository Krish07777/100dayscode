//Count spaces, digits, and special characters in a string.
#include<stdio.h>
int main()
{
    char str[100], space=0, digit=0, special=0, ch;
    printf("\nEnter the string: ");
    scanf("%[^\n]", &str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        ch=str[i];
        if (!(ch>='a' && ch<='z' || ch>='A' && ch<='Z'))
        {
            if (ch==' ')
            {
                space++;
            }
            
            else if (ch>='0' && ch<='9')
            {
                digit++;
            }
            
            else
            {
                special++;
            }
            
        }
        
        
    }
    
    printf("\nNumber of spaces: %d", space);
    printf("\nNumber of digits: %d", digit);
    printf("\nNumber of special characters: %d", special);
}