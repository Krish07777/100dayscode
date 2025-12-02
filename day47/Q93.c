//Check if two strings are anagrams of each other.
#include<stdio.h>
int main()
{
    char str[100], str2[100];
    int freq1[26]={0}, freq2[26]={0}, count=0;
    printf("\nEnter first string: ");
    scanf(" %[^\n]", &str);
    printf("Enter second string: ");
    scanf(" %[^\n]", &str2);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        
        freq1[str[i]-'a']++;
    }
    
    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i]>='A' && str2[i]<='Z')
        {
            str2[i]=str2[i]+32;
        }
        
        freq2[str2[i]-'a']++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i]!=freq2[i])
        {
            count++;
            break;
        }
        
    }
    
    if (count)
    {
        printf("\nThe strings are not anagrams!!!");
    }
    
    else
    {
        printf("\nThe strings are anagrams!!!");
    }
    
}