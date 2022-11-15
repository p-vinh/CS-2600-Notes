// Funcations 
#include<stdio.h> // Standard input output library

//Global Variables
int a;
int b;

int fun() {
    static int count = 0; //static variable
    count++;
    return count;
}

int add() {
    return a + b;
}


int main() {
    int answer; // Local variable
    a = 5;
    b = 7;
    
    answer = add();
    printf("%d\n", answer);
    printf("%d ", fun());
    printf("%d ", fun());
    return 0;
}