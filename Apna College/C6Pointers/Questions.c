//Find the maximum number between two numbers using a pointer.

#include<stdio.h>
void findMax( int *a, int *b, int *max);
int main(){
    int num1, num2, max;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    findMax(&num1, &num2, &max);
    printf("The maximum number between %d and %d is %d\n", num1, num2, max);

    return 0;
}
void findMax(int *a, int *b, int *max){
    if (*a > *b) {
       *max = *a;
    } else {
        *max = *b;
    }
}
