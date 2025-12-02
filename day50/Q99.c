//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], mm[3], month[4];
    printf("\nEnter the date (dd/mm/yyyy): ");
    scanf("%[^\n]", str);
    mm[0]=str[3];
    mm[1]=str[4];
    mm[2]='\0';
    if (strcmp(mm, "01")==0)
    {
        strcpy(month, "Jan");
    }
    
    else if (strcmp(mm, "02")==0)
    {
        strcpy(month, "Feb");
    }
    
    else if (strcmp(mm, "03")==0)
    {
        strcpy(month, "Mar");
    }
    
    else if (strcmp(mm, "04")==0)
    {
        strcpy(month, "Apr");
    }
    
    else if (strcmp(mm, "05")==0)
    {
        strcpy(month, "May");
    }
    
    else if (strcmp(mm, "06")==0)
    {
        strcpy(month, "Jun");
    }
    
    else if (strcmp(mm, "07")==0)
    {
        strcpy(month, "Jul");
    }
    
    else if (strcmp(mm, "08")==0)
    {
        strcpy(month, "Aug");
    }
    
    else if (strcmp(mm, "09")==0)
    {
        strcpy(month, "Sep");
    }
    
    else if (strcmp(mm, "10")==0)
    {
        strcpy(month, "Oct");
    }
    
    else if (strcmp(mm, "11")==0)
    {
        strcpy(month, "Nov");
    }
    
    else if (strcmp(mm, "12")==0)
    {
        strcpy(month, "Dec");
    }
    
    else
    {
        strcpy(month, "???");
    }
    
    printf("\nNew date is %.2s-%s-%s", str, month, &str[6]);
}