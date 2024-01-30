//write a program to reverse an array.
#include <stdio.h>

void reverse(int arr[], int size){
    for(int i = 0; i <= size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;    
    }
}

void main(){
    printf("Enter the size of the array: ");
    int x;
    scanf("%d",&x);
    int arr[x];
    printf("Enter %d elements of the array: ",x);
    for(int i = 0; i < x; i++){
        scanf("%d",&arr[i]);
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,size);
    printf("the array after reverse is: ");
    for(int i = 0; i < x; i++){
        printf("%d ",arr[i]);
    }
}