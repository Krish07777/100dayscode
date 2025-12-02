/*
Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/
#include<stdio.h>
int main()
{
    printf("\nThe pattern is:\n");
    for (int i = 5; i >= 1; i--)
    {
        for (int a = 0; a < 5-i; a++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

}