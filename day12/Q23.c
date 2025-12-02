/*Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.
*/
#include<stdio.h>
int main()
{
    int a;
    printf("\nHow many days late after the submission period?");
    printf("\nEnter the number of days: ");
    scanf("%d", &a);
    if(a<=5)
    {
        printf("\nTotal fine to be paid is %d", a*2);
    }
    else if(a>5 && a<=10)
    {
        printf("\nTotal fine to be paid is %d", (5*2)+((a-5)*4));
    }
    else if(a>10 && a<=30)
    {
        printf("\nTotal fine to be paid is %d", (5*2)+(5*4)+((a-10)*6));
    }
    else if(a>30)
    {
        printf("\nYour membership has been cancelled!!!");
    }
    else{
        printf("Number of days can not be negative.....");
    }
}