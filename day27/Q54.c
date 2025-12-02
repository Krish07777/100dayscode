/*
Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include<stdio.h>
int main()
{
    printf("\nThe pattern is:\n");
    for (int i = 1; i <= 7; i+=2)
    {
        for (int a = 1; a < 7-i; a+=2)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    for (int i = 5; i >= 1; i-=2)
    {
        
        for (int a = 1; a < 7-i; a+=2)
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