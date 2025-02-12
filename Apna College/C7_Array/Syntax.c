#include<stdio.h>
int main(){

//     int marks[] = {34, 35, 36};
//  // [] is indicates the size of array elements.
//     int marks[3] = {34, 35, 36}; 

    int marks[3];

    printf("Physics: ");
    scanf("%d", &marks[0]);

    printf("Chemistry: ");
    scanf("%d", &marks[1]);

    printf("Math: ");
    scanf("%d", &marks[2]);

    printf("Physics= %d\n", marks[0]);
    printf("Chemistry= %d\n", marks[1]);
    printf("Math= %d\n", marks[2]);

//  To calculate the percentage.
    // float Percent;
    // Percent = (marks[0] + marks[1] + marks[2]) / 3.0;
    // printf("Percentage = %f\n", Percent);

    return 0;
}