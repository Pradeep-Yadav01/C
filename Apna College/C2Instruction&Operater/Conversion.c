#include <stdio.h>
int main() {

    printf("sum of 2&3: %d\n", 2+3); // int operator int = int
    printf("sum of 2.0&3: %f\n", 2.0+3); // float operaton int = float
    printf("sum of 2.0&3.0: %f\n", 2.0+3.0); // float operator float = float

    /*
    Associative Operator
    Working On BODMAS 
    */
    printf("Output %d\n", 5*2-2*3);
    printf("Output %d\n", 5*2/2*3);
    printf("Output %d\n", 5*(2/2)*3);
    printf("Output %d\n", 5+2/2*3);
    return 0;
}