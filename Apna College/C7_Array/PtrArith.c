#include<stdio.h>
int main(){
  
    //Pointer Arithmetic used to find the memoory location.
    
    // int age = 22;
    // int *ptr = &age;
    // printf("ptr is %p\n", ptr);
    // ptr++;
    // printf("ptr is %u\n", ptr);
    // ptr--;
    // printf("ptr is %u\n", ptr);

    // float price = 100.0;
    // float *ptr = &price;
    // printf("ptr is %p\n", ptr);
    // ptr++;
    // printf("ptr is %u\n", ptr);
    // ptr--;
    // printf("ptr is %u\n", ptr);

    char star = '*';
    char *ptr = &star;
    printf("ptr is %p\n", ptr);
    ptr++;
    printf("ptr is %u\n", ptr);
    ptr--;
    printf("ptr is %u\n", ptr);

   

   
    return 0;
}