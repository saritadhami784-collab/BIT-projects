// WAP to calculate area or perimeter of a reactangle.
#include<stdio.h>
int main()
{
    int length, breadth, area, p;
    printf("enterb the value of length &breadth:");
    scanf("%f", &length& breadth);
    printf("1>area\n");
    printf("2>perimeter\n");
    printf("enter your choice:");
    scanf("%d", &choice);
        switch(choice)
        {
        case1:
        area = length*breadth;
        printf("the area is %f", area);
        break;
        case2:
        p=2*length+breadth;
        printf("the perimeter is %f",p);
        break;
    }
        return 0;
    }
