#include<stdio.h>
struct students{
    char name[50];
    int roll;
    float cgpa;
};
int main(){
    struct student s1;
    printf("Enter name:");
    scanf("%s", s1.name);
    printf("Enter roll: ");
    scanf("%d", &s1.roll);
    printf("Enter cgpa: ");
    scanf("%f", &s1.cgpa);

    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("CGPA: %f\n", s1.cgpa);
    
    
    
    return 0;
}

