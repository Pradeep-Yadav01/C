#include<stdio.h>
int main(){
    //for(Initialization; Condition; Update)

    printf("Printing Integer Values:\n");
    for(int i=1; i<=10; i++ ) {
        printf("%d \n", i);
    }

    printf("\n");
    printf("Printing decimal values:\n");
    for(float i=1.0; i<=5.0; i++){
        printf("%f\n", i);
    }

    printf("\n");
    printf("Printing character values:\n");
    for(char ch = 'A'; ch<='Z'; ch++){
        printf("%c \n", ch);
    }

    return 0;
}