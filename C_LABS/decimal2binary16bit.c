/******************************************************************************

Program to convert any integer decimal number (max. 65535) to binary (upto 16 bit) 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=65535;
    int r=0;
    int arr[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    
    for (int i=0;i<16;i++){
    
    r=n%2;
    arr[i]=r;
    printf("%d %d \n",n,r);
    n=n/2;
    
    }
    
    printf("16bit binary output:");
    for(int i=15;i>=0;i--){
        printf("%d",arr[i]);
    }
    

    return 0;
}
