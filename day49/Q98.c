// Print initials of a name with the surname displayed in full.
#include <stdio.h>
int main()
{
    int j = 0, count = 0;
    char str[100], str2[100], ch1, ch2, ch3;
    printf("\nEnter the string: ");
    scanf("%[^\n]", str);
    ch1 = str[0];
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i + 1] != '\0' && str[i] == ' ')
        {
            count++;
            if (count == 1)
            {
                ch2 = str[i + 1];
            }
            j = i + 1;
        }
    }

    printf("\nThe initials are %c.%c. %s", ch1, ch2, &str[j]);
}