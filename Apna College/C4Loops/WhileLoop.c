#include<stdio.h>
int main(){
    //Syntax of while loop
    int i = 1;
    while(i<=5){
        printf("%d\n", i);
        i++;
    }
//Enter the number 0 to N, and n is a user input value
    int j = 0, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while(j<=n) {
        printf("%d\n", j);
        j++;
    }


    return 0;
}