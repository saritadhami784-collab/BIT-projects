//WAP to find whether given an integer is divisible by 3 and 5 but not by 10.
#include<stdio.h>
int main()
{
    int n;
    printf("enter an integer:");
    scanf("%d", &n);
    if(n% 3==0&&n%5==0)
    {
        if(n% 10!=0)
    {
        printf("%d is divisible by 3&5 and not by 10",n);
    }
    else{
        printf("%d is divisible by 3,5&10",n);

    return 0;
        }
        
    }
}