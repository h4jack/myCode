//write a program to implement the linear search algorithm using c.

#include <stdio.h>

//linear search iteratively.
int linearSearch(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

//linear search recursively.
// int linearSearch(int arr[], int n, int i, int key){
//     if(i < n){
//         if(arr[i] == key){
//             return i;
//         }
//         return linearSearch(arr, n, i+1, key);
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

    // int result = linearSearch(arr,n,key); //iterative search.
    int result = linearSearch(arr, n, key); //recursive search.

    if(result != -1){
        printf("the element %d found in index %d of the array.",key, result);
    }else{
        printf("the element %d not exist on the array.",key);
    }

    return 0;
}