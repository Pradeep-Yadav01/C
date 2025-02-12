#include<stdio.h>
int main(){
// Print the odd numbers between 5 to 50.
    for(int i=5; i<=50; i++){
        if(i % 2 != 0){ 
             printf("%d\n", i);
        
        }
    
    }
// Print the Factorial number of given input.

    int n, factorial = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        factorial = factorial*i;
    }
    printf("%d\n", factorial);

// Printing the reverse table of number given by user.
    int m;
    printf("Enter number: ");
    scanf("%d", &m);

    for(int i= 10; i>=1; i--){
        printf("%d\n", m*i);
    }  

    return 0;
}