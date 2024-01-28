//8. Write a macro that swaps two numbers. WAP to use it.
#include <stdio.h>

#define SWAP(a,b) (a ^= b ^= a ^= b)
int main(){
    int num1,num2;
    printf("Enter two number : ");
    scanf("%d %d",&num1,&num2);

    printf("Values before swapping\n");
    printf("num1 = %d, num2 = %d\n\n", num1, num2);

    SWAP(num1, num2);

    printf("Values after swapping\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}