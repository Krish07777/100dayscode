/*
Write a program to take an integer array as input. Only one element will be repeated.
Print the repeated element. Try to find the result in one single iteration.
*/
#include <stdio.h>
int main()
{
    int array[100], freq[100] = {0}, a, x, count = 0;
    printf("\nNumber of elements you want to enter: ");
    scanf("%d", &a);
    printf("\nEnter %d values such that only one element is repeated-\n", a);
    for (int i = 0; i < a; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
        freq[array[i]]++;
        if (freq[array[i]] == 2)
        {
            x = array[i];
            break;
        }
    }

    printf("\nRepeated element in given array is %d", x);
}