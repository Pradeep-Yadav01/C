#include<stdio.h>
int main(){
    char alphabets[26];
    char *ptr = alphabets; // *ptr is used to stotre the address of the first element of the array
    
    for(int i = 0; i< 26; i++ ){
        *(ptr + i) = 'A' + i;
    }
    //  print the alphabets using the array
    printf("The letters in the english alphabets are: \n");
    for(int i = 0; i< 26; i++ ){
        printf("%c\n", alphabets[i]);
    }
    printf("\n");

    return 0;
}