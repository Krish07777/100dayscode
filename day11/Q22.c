//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main()
{
    int cp, sp;
    float l, p;
    printf("\nEnter the cost price of product: ");
    scanf("%d", &cp);
    printf("\nEnter the selling price of product: ");
    scanf("%d", &sp);
    if(cp>sp)
    {
        printf("\nYou have incurred a Loss.");
        printf("\nLoss percentage is %f", ((cp-sp)/(cp*1.0))*100);
    }
    else if(sp>cp)
    {
        printf("\nYou have gained Profit!!");
        printf("\nProfit percentage is %f", ((sp-cp)/(cp*1.0))*100);
    }
    else
    {
        printf("\nNo profit or loss gained.");
    }
}