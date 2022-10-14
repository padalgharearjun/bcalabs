
#include <stdio.h>

int factorial (int n);

int main()
{
    int n=10;
    int f=0;
    
    f=factorial(n);
    
    printf ("factorial of %d is :%d",n,f);
    

    return 0;
}


int factorial(int n){
    int f1=0;
    if(n==1){
        return 1;
    }
    
    f1= factorial(n-1)*n;
    return f1;

}
