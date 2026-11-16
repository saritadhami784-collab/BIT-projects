//WAPto determine whether a user entered number is odd or even.
#include<stdio.h>
int main()
{
    int a;
    printf("enter any number\n");
    scanf("%d", &a);
    a=a% 2;
    switch (a)
    {
        case0:
        printf("the number is even\n");
        break;
        default:
        printf("the number is odd");
    }
    return 0;
}
