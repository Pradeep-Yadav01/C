#include<stdio.h>
void calculatePrice(float value); // Function Dclaration

int main(){                  /* Function Call */
    float value = 100.0;
    calculatePrice(value);
    return 0;
}
void calculatePrice(float value){   /* Defininig Function */
    value = value + (value*0.18);
    printf("Price after including Tax: %f\n", value);
}