//a program to merge two sorted array.
#include <stdio.h>

void merge(int arr[], int arr1[], int arr2[], int l1, int l2) {
    int i = 0, j = 0, k = 0;

    while (i < l1 + l2) {
        if (j >= l1) {
            // arr1 is exhausted, copy remaining elements from arr2
            arr[i++] = arr2[k++];
        } else if (k >= l2) {
            // arr2 is exhausted, copy remaining elements from arr1
            arr[i++] = arr1[j++];
        } else if (arr1[j] <= arr2[k]) {  // Handle potential duplicates
            arr[i++] = arr1[j++];
        } else {
            arr[i++] = arr2[k++];
        }
    }
}

int main(){
    int arr[10];
    int arr1[] = {1,3,5,9,10};
    int arr2[] = {2,3,4,6,8};
    int l1 = sizeof(arr1)/sizeof(arr1[0]);
    int l2 = sizeof(arr2)/sizeof(arr2[0]);
    marge(arr,arr1,arr2,l1,l2);
    int i = 0;
    while(i < 10){
        printf("%d ",arr[i]);
        i++;
    }
    return 0;
}