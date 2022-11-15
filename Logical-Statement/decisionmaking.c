//IF, ELSE IF, ELSE - Decision Making
#include <stdio.h>

int main() {

    /* Local Variable Definition*/
    int a = 10;

    /* check the boolean condition */
    if (a == 10) {
        printf("Value of a is 10\n");
    }
    else if (a == 20) {
        printf("Value of a is 20\n");
    }
    else if (a == 30) {
        printf("Value of a is 30\n");
    }
    else {
        printf("None of the value is catching\n");
    }

    printf("Exact value of a is: %d\n", a);

    return 0;
}