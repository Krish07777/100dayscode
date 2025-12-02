//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
int main()
{
    char alpha;
    printf("To check if it is vowel or consonant....\n");
    printf("Enter the alphabet:  ");
    scanf("%c", &alpha);
    if (alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u')
    {
        printf("Entered alphabet is a vowel...");
    }
    else
    {
        printf("Entered alphabet is a consonant...");
    }
}