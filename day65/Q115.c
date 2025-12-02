/*
Write a program to take two strings s and t as inputs (assume all characters are lowercase). 
The task is to determine if s and t are valid anagrams, meaning they contain the same characters 
with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
*/
#include<stdio.h>
int main()
{
    char s[100], t[100];
    int count1=0, count2=0, freq1[26]={0}, freq2[26]={0}, ans=0;
    printf("\nEnter string one: ");
    scanf("%[^\n]", s);
    printf("\nEnter string two: ");
    scanf(" %[^\n]", t);
    for (int i = 0; s[i] != '\0'; i++)
    {
        freq1[s[i]-'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++)
    {
        freq2[t[i]-'a']++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i]!=freq2[i])
        {
            ans++;
            break;
        }
        
    }
    
    if (ans)
    {
        printf("\nString %s and %s are not anagrams!!!", s, t);
    }
    else
    {
        printf("\nStrings %s and %s are anagrams!!!", s, t);
    }
    
    
}