/*
Write a program to take an integer array nums of size n, and print the majority 
element. The majority element is the element that appears strictly more than ⌊n / 2⌋ 
times. Print -1 if no such element exists. Note: Majority Element is not necessarily 
the element that is present most number of times.
*/
#include<stdio.h>
int main()
{
    int num[100], a, result=-1, c, freq[10]={0};
    printf("\nEnter the size of array: ");
    scanf("%d", &a);
    printf("\nEnter the values of elements: \n");
    for (int i = 0; i < a; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < a; i++)
    {
        freq[num[i]]++;
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (freq[i]>a/2)
        {
            result=i;
        }
        
    }
    
    printf("\nThe required number is %d", result);
}