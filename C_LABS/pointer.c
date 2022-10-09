// Program to understand the Pointers
#include <stdio.h>

int main()
{
    int age=22;
    int *ptr = &age;
    int **pptr = &ptr;
    
    //variable age  value and address.
    printf ("age value: %d \n", age);
    printf ("age address(&age): %p \n", &age);
    
    //pointer ptr value and address
    
    printf ("ptr value (ptr): %p \n", ptr); //pointer contains address value of variable 'age'.
    printf ("data the ptr is poiting to (*ptr) : %d \n", *ptr); //value at memory location this pointer is pointing (i.e variable 'age' memory location)
    
    
    //Pointer to pointer concept
    
    printf ("ptr address (&ptr): %p \n", &ptr);
    printf ("pptr data (pptr): %p \n", pptr);
    printf ("pptr address (&pptr):%p \n", &pptr);
    
    
 
    return 0;
}
