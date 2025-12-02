//Print all sub-strings of a string.
#include<stdio.h>
int main()
{
    char str[100];
    int count=0;
    printf("\nEnter a string: ");
    scanf(" %[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    
    for (int i = 0; i < count; i++)
    {
        for (int j = i; j < count; j++)
        {
            for (int k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            if (!(i == count-1 && j == count-1))
            {
                printf(", ");
            }
            
            
        }
        
    }
    
}