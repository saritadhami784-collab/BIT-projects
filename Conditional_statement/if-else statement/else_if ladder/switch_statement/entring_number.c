//WAP to find the day on entring a number less than or equal to.
#include<stdio.h>
int main()
{
    int day;
    printf("enter numeric day of the week:\n");
    scanf("%d", &day);
    switch(day)
    {
        case1:
        printf("day is sunday\n");
        break;
        case2:
        printf("day is munday\n");
        break;
        case3:
        printf("day is tuesday\n");
        break;
        case4:
        printf("day is wednesday\n");
        break;
        case5:
        printf("day is thrusday\n");
        break;
        case6:
        printf("day is friday\n");
        break;
        case7:
        printf("day is saturday\n");
        break;
        default:
        printf("your chose is wrong!!!!!!!");
        break;
    }
    return 0;
}

    5