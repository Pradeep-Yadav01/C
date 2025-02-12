#include<stdio.h>
int main(){
    int age = 19; 
    int *ptr = &age; 
    int _age = *ptr;
    printf("%d\n", _age);
// Address
    printf("%p\n", &age);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);

    printf("%u\n", &age);
    printf("%u\n", ptr);
    printf("%u\n", &ptr);
// Data
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));
/*
*ptr is the value of the variable
%p & %u is used to print the address of the variable
& is used to get the address of the variable
*/


    return 0;
}