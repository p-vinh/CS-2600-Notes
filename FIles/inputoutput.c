#include <stdio.h>

typedef int number;

int main() {

    number c;
    printf( "Enter a value :");
    // fflush(stdout); Eclipse Bug Ignore it
    c = getchar();

    printf("\nYou entered: ");
    putchar(c);
    
    return 0;
}