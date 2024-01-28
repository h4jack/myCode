//write a program t find the sum of the following series 1! + 2! + 3! + ..... + N! 

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int f = 1, sum = 0;
    for(int i = 1; i <= n; i++){
        f *=i;
        sum +=f;
    }
    printf("the sum of the following series from 1 to %d is %d", n, sum);
    return 0;
}