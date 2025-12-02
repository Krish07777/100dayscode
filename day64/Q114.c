/*
Write a program to take a string s as input. The task is to find the length
of the longest substring without repeating characters. Print the length as output.
*/
#include <stdio.h>
int main()
{
    char s[100], ch;
    int curlen = 0, maxlen=0, count = 0, freq[256] = {0}, end = 0, start = 0;

    printf("\nEnter the string: ");
    scanf("%[^\n]", s);
    printf("\nThe string is %s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }

    printf("\nNumber of characters are: %d", count);

    for (int end = 0; end < count; end++)
    {
        ch = s[end];
        freq[ch]++;
        while (freq[ch] > 1)
        {
            freq[s[start]]--;
            start++;
        }

        curlen = end - start + 1;
        if (curlen>maxlen)
        {
            maxlen=curlen;
        }
        
    }

    printf("\nThe length of longest substring is : %d", maxlen);
}