//write a program to compute the sum of even series e.g.:- 2+4+6+8+....N
#include <stdio.h>

int main(){
    printf("Enter the number of terms: ");
    int n;
    scanf("%d", &n);
    int sum = 0;
    int temp = 0;
    for(int i = 0; i < n; i++){
        temp += 2;
        sum += temp;
        
    }
    printf("The Sum of Even series is %d", sum);
    return 0;
}