/*Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit*/
#include<stdio.h>
int main()
{
    int a;
    printf("\n---ELECTRICITY BILL---");
    printf("\nEnter the number of units consumed: ");
    scanf("%d", &a);
    if(a<=100)
    {
        printf("\nBill to be paid is %d", a*5);
    }
    else if(a>100 && a<=200)
    {
        printf("\nBill to be paid is %d", (100*5)+((a-100)*7));
    }
    else if(a>200 && a<=300)
    {
        printf("\nBill to be paid is %d", (100*5)+(100*7)+((a-200)*10));
    }
    else if(a>300)
    {
        printf("\nBill to be paid is %d", (100*5)+(100*7)+(100*10)+((a-300)*12));
    }
    else
    {
        printf("\nUnits can not be negative.....");
    }
}