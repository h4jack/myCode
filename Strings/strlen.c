//write a program to implement the strlen function.
#include <stdio.h>

int strlen(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

int main(){
    char name[] = "Superman";
    printf("%s",name);
    printf("\n%d",strlen(name));
    return 0;
}