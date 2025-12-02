// Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
int main()
{
    char str[100], count = 0, a, b;
    printf("\nEnter a string: ");
    scanf("%[^\n]", str);
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }

    for (int i = 1; str[i] != '\0'; i++)
    {
        if (str[i - 1] != ' ' && str[i] >= 'A' && str[i] <= 'Z')
        {

            str[i] = str[i] + 32;
        }

        if (str[i] == ' ' && str[i + 1] != '\0')
        {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
            {
                str[i + 1] = str[i + 1] - 32;
            }
        }
    }

    printf("\nThe new string is '%s'", str);
}