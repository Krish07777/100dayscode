/*
Write a Program to take an integer array nums. Print an array answer such that answer[i] 
is equal to the product of all the elements of nums except nums[i]. The product of any 
prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
*/
#include<stdio.h>
int main()
{
    int answer[100], num[100], a, sum=1;
    printf("\nEnter the number of elements you want to enter: ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (j==i)
            {
                continue;
            }
            
            sum*=num[j];
        }
        
        answer[i]=sum;
        sum=1;
    }
    
    printf("\nThe answer array is: ");
    for (int i = 0; i < a; i++)
    {
        printf("\nElement %d: %d", i+1, answer[i]);
    }
    
}