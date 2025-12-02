// Print the initials of a name.
#include <stdio.h>
int main()
{
    char str[100], str2[100], ch1, ch2;
    int i = 0, j = 0;
    printf("\nEnter your name: ");
    scanf("%[^\n]", str);
    ch1=str[0];
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i]==' ' && str[i+1]!='\0' && str[i+1]!=' ')
        {
            ch2=str[i+1];
        }
        
    }
    
    printf("The initials are: %c.%c.", ch1, ch2);
}