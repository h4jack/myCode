//write a program to compute the simple interest of a principal.
#include <stdio.h>

int main(){
    float p;
    int r;
    int t;

    printf("Enter the Principal Amount: ");
    scanf("%f",&p);
    printf("Enter the interest rate per year: ");
    scanf("%d",&r);
    printf("Enter the number of years: ");
    scanf("%d",&t);

    printf("The simple interest of a Principal %f is %f", p, p*r/100*t);
    return 0;
}