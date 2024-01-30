//check if an array is sorted or not.
#include <stdio.h>

int isSorted(int arr[], int size){
    for(int i = 0; i < size-1; i++){
        if(arr[i] > arr[i+1]){
            return 0;
        }
    }
    return 1;
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
    if(isSorted(arr,size)){
        printf("The array is sorted.");
    }else{
        printf("The array is not sorted.");
    }
    return;
}