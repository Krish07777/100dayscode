//Reverse each word in a sentence without changing the word order.
#include<stdio.h>
int main()
{
    char str[100], str2[100];
    int count=0, k=0, a=0, b=0, j=0;
    printf("\nEnter the string: ");
    scanf("%[^\n]", str);
    while (str[k]!='\0')
    {
        while (str[k]!=' ' && str[k]!='\0')
        {
            k++;
        }

        for (b=k-1; b>=count; b--)
        {
            str2[j++]=str[b];
        }
        
        if (str[k]==' ')
        {
            str2[j++]=' ';
            k++;
        }
        
        count=k;
    }

    str2[j]='\0';
    
    printf("\nNew string is %s", str2);
}