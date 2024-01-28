//write a program to calculate the sum of odd square series e.g.:- 1^2+3^2+5^2...n^2
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    float sum,temp;
    sum = 0;
    temp = 1;
    for(int i = 0; i < n; i++){
        sum += (temp*temp);
        temp += 2;
    }
    printf("The sum of the following series is %f",sum);
}