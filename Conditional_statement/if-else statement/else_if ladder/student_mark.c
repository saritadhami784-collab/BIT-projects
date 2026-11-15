#include<stdio.c>
#include<conio.c)
void main()
{
printf("enter mark of student");
scanf("%d", &marks);
if(marks >= 80)
{
    printf("student is passed in distination:\n");
}
else if(marks >= 60)
{
    printf("student is [passed in first division:\n");
}
else if (marks >= 32)
{
    printf("student is passed in therd division:\n");
}
else{
    printf("student is failed:\n");
}
getch();
}

