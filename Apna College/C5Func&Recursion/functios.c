#include<stdio.h>
void printHello();
void printGoodbye();

int main(){
    printHello(); //function call
    printGoodbye();
    printHello(); 
    printHello(); 

    return 0;
}

void printHello(){
    printf("Hello World\n");
}
void printGoodbye(){
    printf("GoodBye\n");
}