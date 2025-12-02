//Check if one string is a rotation of another.
#include<stdio.h>
int main()
{
    char str[100], str2[100];
    int count=0, check=0;
    printf("\nEnter first string: ");
    scanf(" %[^\n]", str);
    printf("\nEnter second string: ");
    scanf(" %[^\n]", str2);
    for (int i = 0; str2[i] != '\0'; i++)
    {
        count++;
    }
    
    for (int i = 0, j=count-1; str[i] != '\0' && j>=0; i++, j--)
    {
        if (str[i]!=str2[j])
        {
            check++;
            break;
        }
        
    }
    
    if (check)
    {
        printf("\nThe strings are not rotation of each other.");
    }
    
    else
    {
        printf("\nThe strings are rotation of each other.");
    }
    
}