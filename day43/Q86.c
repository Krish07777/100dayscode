//Check if a string is a palindrome.
#include<stdio.h>
int main()
{
    char str[100], str2[100], count=0, ch=0;
    printf("\nEnter the string: ");
    scanf("%[^\n]", &str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        count++;
    }

    for (int i = count-1, j = 0; i >= 0 && str[j]!='\0'; i--, j++)
    {
        if (str[i]!=str[j])
        {
            ch++;
        }
        
    }
    
    if (ch)
    {
        printf("\nThe string %s is not a palindrome!!!", str);
    }
    
    else
    {
        printf("\nThe string %s is a palindrome!!!", str);
    }
    
}