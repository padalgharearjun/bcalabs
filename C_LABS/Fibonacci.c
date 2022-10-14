/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int fib (int n);

int main()
{

    int n=8;
    int f=fib(n);
    printf("fibonacci=%d\n",f); 
    return 0;
}


int fib(int n){
    
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    
    int fib1=fib(n-1);
    int fib2=fib(n-2);
    
    int f=fib1+fib2;
    return f;
}
