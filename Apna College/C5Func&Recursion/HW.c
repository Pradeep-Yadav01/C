// Finding factorial of a number using loop with help of Recursion.
#include<stdio.h>

unsigned long long factorial(int n);

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d is %llu\n", n, factorial(n));
    }
    return 0;
}

unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}