//write a program to calculate sum of all prime numbers between 1 to N.
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n);

int main(){
    printf("Enter the N: ");
    int n,sum=0;
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        if(isPrime(i)){
            sum += i;
        }
    }
    printf("the sum of prime numbers from 0 to %d is %d", n, sum);
}
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++){
        if (n % i == 0)
            return false;
    }
    return true;
}