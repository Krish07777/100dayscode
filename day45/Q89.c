//Count frequency of a given character in a string.
#include<stdio.h>
int main()
{
    char str[100], count=0, ch;
    printf("\nEnter the string: ");
    scanf("%[^\n]", &str);
    printf("\nEnter the character to match: ");
    scanf(" %c", &ch);
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]==ch)
        {
            count++;
        }
        
    }

    printf("\nThe frequency of %c in %s is %d", ch, str, count);
}