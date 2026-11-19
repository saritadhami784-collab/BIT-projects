//WAP to check whether the entered number is prime number  or odd.
#include<stdio.h>
int main()
{
int i,n,c=0;
printf("enter the any number:");
scanf("%d",&n);
for(i=1;i<=100;i++);
{
if(n%i==0)
{
    c++;

}
}
if(c==2)
{
    printf("%d is prime number",n);
}
else{
printf("%d is not prime number",n);
}

}
