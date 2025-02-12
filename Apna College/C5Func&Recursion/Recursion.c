// Function to print factorial of n .
#include<stdio.h>
int factorial(int n);

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Factorial is: %d ", factorial(n));

    return 0;
}
int factorial(int n){
    if(n==0) {
        return 1;
    }
    int Factnminus1 = factorial(n-1);
    int factn = Factnminus1 * n;
    return factn;
}