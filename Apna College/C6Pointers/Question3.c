#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of element in array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;
    printf("Enter the elements of the array: \n");
    for(int i= 0; i < n; i++){
        scanf("%d", ptr + i);
    }
    printf("The elements of the array in reverse order are: \n");
    for(int i = n-1; i >= 0; i--){
        printf("%d\n", *(ptr + i));
    }
    printf("\n");

    return 0;

}