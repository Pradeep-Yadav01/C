#include <stdio.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d", &age);

if(age<=12){
    printf("You are a Child\n");
}
else if(age<=18){
    printf("you are a teenager\n");
}
else if (age<= 40) {
    printf("you are Young\n");
}
else {
    printf("you are old\n");
}
    return 0;
}