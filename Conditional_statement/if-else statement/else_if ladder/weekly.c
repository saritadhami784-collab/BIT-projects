// WAP to print weekly based on given number.
#include<stdio.h>
int main()
{
    int day;
    printf("enter day number:");
    scanf("%d", &day);
        if(day==1)
        {
        printf("SUNDAY.");
    }
        else if(day==2)
        {
        printf("MONSAY.");
    }
        else if(day==3)
        {
        printf("TUESDAY.");
    }
        else if(day==4)
        {
        printf("WEDNESDAY.");
    }
        else if(day==5)
        {
        printf("THURSDAY.");
    }
    else if(day==6)
    {
        printf("FRIDAY.");

    }
        else if(day==7)
        {
        printf("SATURDAY.");
        }
        else
        {
        printf("invalid day.");
        }
        return 0;
}