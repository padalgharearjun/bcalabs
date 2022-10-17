/******************************************************************************

Program to convert any integer decimal number (max. 65535) to binary (upto 16 bit) 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=0;
    int r=0;
    int count=0;
    int arr[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    printf("Enter any decimal number(0 to 65535:");
    scanf("%d",&n);
    
    if(n<=65535 & n>=0){
    
    for (int i=0;n>0;i++){
    
    r=n%2;
    arr[i]=r;
    printf("%d %d \n",n,r);
    n=n/2;
    count++;
    }
    
    printf("16bit binary output:");
    for(int i=count;i>=0;i--){
        printf("%d",arr[i]);
    }
    }else{
        printf("Entered Decimal number is invalid.");
    }

    return 0;
}
