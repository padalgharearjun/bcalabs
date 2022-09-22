#include<stdio.h>


int main (void)
{
int sum=0;
int n1=0;
int n2=0;
printf("Enter first number:\n")
scanf("%d",&n1);

printf("Enter second number:\n")
scanf("%d",&n2);

sum=n1+n2;

printf("Sum of %d and %d is:%d",sum,n1,n2);

return 0;
}
