//WAP to print multiplication table of any number entered by the user.
#include<stdio.h>
int main()
{
    int i,n;
    printf(" enter the any number:");
    scanf("%d",&n);
    for(i=3;i<=10;i++)
    {
        printf("%d*%d=%d\n3",n,i,n*i);
    }
}