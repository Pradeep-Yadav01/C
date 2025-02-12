#include<stdio.h>
void Namaste();
void Bonjour(); //French greeting

int main(){
    printf("I means Indian & F means French: \n");
    char ch;
    printf("Enter I or F: ");
    scanf("%c", &ch);

    if(ch == 'I'){
        printf("Namaste\n");
    } else {
        printf("Bonjour\n");
    }

    return 0;
}

void printNamaste() {
    printf("Namaste\n");
}
void printBonjour() {
    printf("Bonjour\n");
}