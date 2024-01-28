/*
9. WAP to print a triangle of stars as follows (take number of lines from user):
    *
   ***
  *****
 *******
*********
*/
#include <stdio.h>

int main(){
    int n;
    printf("Enter how many lines you want : ");
    scanf("%d",&n);
    int k=1,l=n-1;
    for(int i = 1; i<=n;i++){
        for(int j = 1;j<=l;j++)
        printf(" ");
        l--;
        for(int j = 1;j<=k;j++)
        printf("*");
        k+=2;
        printf("\n");
    }
    return 0;
}