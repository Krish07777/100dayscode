//Find the first repeating lowercase alphabet in a string.
#include<stdio.h>
int main()
{
    int freq[26]={0};
    char str[100], count=0, ch;
    printf("\nEnter the string: ");
    scanf("%[^\n]", &str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        ch=str[i];
        if (str[i]>='a' && str[i]<='z')
        {
            freq[str[i]-'a']++;
        }
        
        if (freq[str[i]-'a']>1)
        {
            count=str[i];
            break;
        }
        
    }
    
    if (count)
    {
        printf("\nThe first repeating lowercase alphabet is %c", count);
    }
    
    else
    {
        printf("\nThere is no repeating lowercase alphabet!!!");
    }
    
}