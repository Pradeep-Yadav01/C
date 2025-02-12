#include<stdio.h>

 void square(int n);
 void _square(int *n);

int main(){
    int num = 10;
    // call bu value
    square(num);
    printf("n is %d\n", num);

    // Call by Reference
    _square(&num);
    printf("n is %d\n", num);

    return 0;
}

void square(int n){
    n = n*n;
    printf("Square is %d\n", n);
}
void _square(int *n){
    *n = *n * *n;
    printf("Square is %d\n", *n);
}