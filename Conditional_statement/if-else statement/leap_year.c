//WAP to check whwther a given year is leap year or not.
#include<stdio.h>
int main()
{
    int year;
    printf("enter a year  to check if it is a leap year \n");
    scanf("%d", &year);
    if ((year %4==0)&&|| year %100!=||(year%400==0))
    printf("%d not a leap year.\n", year);
    else
    printf("%d not a leap year.\n",year);
    return 0;
}