#include <stdio.h>

int main() {
    // Average of 5 Numbers

    float num1, num2, num3, num4, num5, average;
    printf("Enter the numbers: ");
    scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);

    average = (num1 + num2 + num3 + num4 + num5) / 5;

    printf("The average of %.2f, %.2f, %.2f, %.2f, and %.2f is: %.2f\n", num1, num2, num3, num4, num5, average);

    return 0;
}