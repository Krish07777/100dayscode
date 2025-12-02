//Count vowels and consonants in a string.
#include<stdio.h>
int main()
{
    char str[100], v=0, c=0, ch;
    printf("\nEnter the string: ");
    scanf("%[^\n]", &str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        ch=str[i];
        if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
        {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            {
                v++;
            }
            
            else
            {
                c++;
            }
            
        }
        
    }
    
    printf("\nNumber of vowels are %d", v);
    printf("\nNumber of consonants are %d", c);
}