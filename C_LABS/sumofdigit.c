#include<stdio.h>

int main()
{
    int num;
    int mod=0;
    int sum=0;
    scanf("%d", &num);

    while (num>0)
    {
    mod = num % 10;
    sum = sum + mod;
    num = num/10;
    }
    
    printf("%d", sum);
    return 0;
}
