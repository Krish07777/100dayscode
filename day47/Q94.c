// Find the longest word in a sentence.
#include <stdio.h>
int main()
{
    char str[100], word[100], mword[100];
    int max = 0, count = 0, space = 0, j=0, k, l;
    printf("\nEnter a sentence: ");
    scanf("%[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            space++;
        }
    }

    for (int i = 0; i < space + 1; i++)
    {
        k=0;
        count=0;
        while (str[j]!=' ' && str[j]!='\0')
        {
            word[k]=str[j];
            j++;
            k++;
            count++;
        }

        word[k]='\0';
        
        if (max<count)
        {
            max=count;
            l=0;
            for (int m = 0; word[m] != '\0'; m++)
            {
                mword[l]=word[m];
                l++;
            }
            
            mword[l]='\0';

        }

        if (str[j]==' ')
        {
            j++;
        }
        
        
    }

    printf("\nThe longest word is %s", mword);
    printf("\nLength is %d", max);
}