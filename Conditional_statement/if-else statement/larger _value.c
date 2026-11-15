//WAP to read any two number from the keyword and display the larger value.
#include<stdio.h>
#include<conio.h>
void main()
{
    float x, y;
    printf("enter the first number :");
    scanf("%d", &x);
    printf("enter the second number :");
    scanf("%d", &y);
    if (x>y)
    printf("larger value is %f",x);
    else
    printf("larger value is %f", y);
    getch();
}