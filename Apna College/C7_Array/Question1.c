//In an array of numbers,find how many times does a number 'x' occurs/present.



#include<stdio.h>
int main(){
    int n,x,count=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of array:");
    for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }

    printf("Enter the element o be searched: ");
    scanf("%d", &x);

    for(int i=0; i<n; i++){
        if(arr[i]==x){
            count++;
        }
    }

    printf("The element %d is present %d times in the array.\n", x, count);

    return 0;
}