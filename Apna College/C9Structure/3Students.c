#include<stdio.h>
struct student{
    char name[50];
    int roll;
    float cgpa;
};
int main(){
    struct student students[3];

    for(int i=0; i<3; i++){
    printf("Enter name %d:\n", i+1);
    scanf("%49s", students[i].name);
    printf("Enter roll %d:\n", i+1);
    scanf("%d", &students[i].roll);
    printf("Enter cgpa %d:\n", i+1);
    scanf("%f", &students[i].cgpa);
    }
    
    for(int i=0; i<3; i++ ){
        printf("Name: %s\n", students[i].name);
        printf("Roll %d: %d\n", i+1, students[i].roll);
        printf("CGPA %d: %f\n", i+1, students[i].cgpa);

    }
    
   
    return 0;
}