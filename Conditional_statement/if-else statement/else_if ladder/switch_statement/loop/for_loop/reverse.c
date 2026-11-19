//WAP to print the the reverse of a number.
#include<stdio.h>
int main()
{
    int i,n,rem,reverse=0, temp;
    printf("ente a any number:");
    scanf("%d",&n);
    temp=n;
    while (n!=0)
    {
rem=n%10;
reverse=reverse*10+rem;
n=n/10;
    }
    printf("reverse of %d is %d", temp, reverse);
    
}