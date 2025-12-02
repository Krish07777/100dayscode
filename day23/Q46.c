/*Write a program to print the following pattern:
*****
*****
*****
*****
***** */
#include<stdio.h>
int main()
{
    printf("\nThe pattern is:\n");
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}