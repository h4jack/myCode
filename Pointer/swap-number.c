#include <stdio.h>

//a function to swap two number using pointer.
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    printf("Your Number a = %d and b = %d\n",a,b);
    swap(&a,&b);
    printf("After swap a = %d and b = %d",a,b);
    return 0;
}