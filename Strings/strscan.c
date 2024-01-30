//write a function to scan a string.
#include <stdio.h>

void strscan(char str[], int n){
    char c = 0;
    int i = 0;
    while(c != '\n' && i < n-1){
        scanf("%c",&c);
        str[i] = c;
        i++;
    }
    str[i] = '\0';
}

int main(){
    char name[10];
    strscan(name,10);
    printf("%s",name);
    return 0;
}