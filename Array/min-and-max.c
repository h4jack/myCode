#include <stdio.h>

int min(int arr[],int size){
    int x = arr[0];
    while(--size){
        if(x > arr[size]){
            x = arr[size];
        }
    }
    return x;
}

int max(int arr[],int size){
    int x = arr[0];
    for(int i = 0; i < size; i++){
        if(x < arr[i]){
            x = arr[i];
        }
    }
    return x;
}

void main(){
    int arr[] = {1,2,14,18,9,11,82,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    int small = min(arr,len);
    int big = max(arr,len);
    printf("the min and the maximum elements of the array is %d, %d",small,big);
    return;
}