
#include <stdio.h>
#include <math.h>
int  main () 
{
    int num;
    int r=0;
    int temp = 0;
    int sum=0;
    int d=0;
    int comp=0;
    printf ("Enter any positive integer number:\n");
    scanf ("%d", &num);
    printf ("Entered number is %d \n", num);
    
    temp=num;
    comp=num;
    
    while (temp > 0)
        {
        temp=temp/10;
        d++;
        }
    
    while (num > 0)
        {
        r=num%10;
        sum = sum+ pow(r,d);
        num=num/10;
        
        }
    
    if (comp == sum)
    {
        printf("Number is armstrong number.");
    }
    else
    {
        printf("Number is not armstrong number.");
    }
    
    return 0;
}
