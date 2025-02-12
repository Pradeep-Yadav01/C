// Continue Statement 
#include<stdio.h>
int main(){
// Print the numbers except 4.
    for(int i=1; i<=10; i++){
        if(i==4){ //Skip part
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}