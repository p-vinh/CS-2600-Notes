//Pointers -- point to ADDRESS of RAM. Can be data or function 
//2 operations  
//You may wish to change what you are pointing to 
//You may wish to read/write/execute the data/function you are pointing to  
//this is done by dereferencing aka go to address you are pointing to  
//When declaring a pointer size allocated is always 4 bytes as we hold an address in memory 

#include<stdio.h>

int main() {
    int var = 20;
    int x = 10;
    int *ip; // pointer variable declaration

    ip = NULL; // point to address 0 for safety

    ip = &var; // address of var

    x = x + *ip; // x = 10 + 20, grabbing data where pointer is pointing is called deferencing the pointer

    ip = &x; // CHANGE WHERE ip points ==> point to address of x
    
    //showing pointer calculation
    // address of ip + (3 * sizeof(int)) = address of ip + 12 
    ip = ip + 3;

    printf("Address of var variable: %x\n", &var);
    
    printf("Address stored in ip variable: %d\n", ip);
    printf("Value of *ip variable: %d\n", *ip);
    
    int j = 5;
    ip = &j;
    printf("Value of *ip variable 2: %d\n", *ip);
    
    return 0;
}