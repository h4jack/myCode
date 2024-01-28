#include <stdio.h>

void pointswap(int *a, int *b);
void main(){
    int a,b;
    printf(" Enter any Two number : ");
    scanf("%d %d", &a, &b);
    printf("a and b before swap a is %d b is %d\n",a,b);
    pointswap(&a,&b);
    printf("a and b after swap a is %d b is %d",a,b);
}

void pointswap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}