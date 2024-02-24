// implement the binary search algorithm using c.
#include <stdio.h>

void printArray(int arr[], int low, int high){
    while(low < high){
        printf("%d ",arr[low++]);
    }
}

// binary search iteratively.
int binarySearch(int arr[], int len, int key){
    int high = len;
    int low = 0;
    int mid = low + (high-low) / 2;

    while(high >= low){
        mid = low + (high-low) / 2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return -1;
}

//binary search recursively.
// int binarySearch(int arr[], int high, int low, int key){
//     int mid = (high+low)/2;

//     if(arr[mid] == key){
//         return mid;
//     }else if(arr[mid] < key){
//         return binarySearch(arr, high, mid+1, key);
//     }else{
//         return binarySearch(arr, mid-1, low, key);
//     }
    
//     return -1;
// }

int scanInt(){
    int n;
    scanf("%d",&n);
    return n;
}

int main(){
    printf("Enter the size of the array: ");
    int n = scanInt();
    int arr[n];

    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        arr[i] = scanInt();
    }

    printf("Enter the element you want to search on the array: ");
    int key = scanInt();

    int result = binarySearch(arr,n,key); //iterative search.
    // int result = binarySearch(arr, n, 0, key); //recursive search.

    if(result != -1){
        printf("the element %d found in index %d of the array.",key, result);
    }else{
        printf("the element %d not exist on the array.",key);
    }

    return 0;
}