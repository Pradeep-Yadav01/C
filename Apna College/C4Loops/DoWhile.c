#include<stdio.h>
int main(){
    // do{
    //     //Statements
    // }while();


    // int i=5;
    // do{
    //     printf("%d\n", i);
    //     i--;
    // }
    // while(i>=1);

// Take input from user until the number a ODD number. (Break rule)
    int n;
    do {
        printf("Enter Number: ");
        scanf("%d", &n);
        printf("%d\n", n);
        
        if(n % 2!=0){
            break;
        }

    } while(1);
    printf("Value id odd");
      
     


    return 0;
}