//write a program to calculate the sum of digits of a three digit number.
#include <stdio.h>

int main(){
    error:
    printf("Enter the 3 digit number: ");
    int n;
    scanf("%d",&n);
    int sum = 0;
    if(n > 999||n<100){
        printf("please enter number of 3 digits.\n");
        goto error;
    }
    int i = 3;
    while(i > 0){
        sum += n%10;
        n /= 10;
        i--;
    }
    printf("The sum of 3 digits is : %d",sum);
    return 0;
}