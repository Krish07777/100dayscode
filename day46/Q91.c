//Remove all vowels from a string.
#include<stdio.h>
int main()
{
    char str[100], ch, j=0;
    printf("\nEnter the string: ");
    scanf("%[^\n]", &str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        ch=str[i];
        if (!(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'))
        {
            str[j]=str[i];
            j++;
        }
        
    }

    str[j]='\0';

    printf("\nNew string is %s", str);
}