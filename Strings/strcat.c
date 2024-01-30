//write a program to concatinate two string.
#include <stdio.h>

void concat(char str1[], char str2[]){
    int i = 0;
    while(str1[i] != '\0'){
        i++;
    }
    int j = 0;
    while(str2[j] != '\0'){
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

int main(){
    char str1[20] = "Hello";
    concat(str1," World!");
    printf("%s",str1);
    return 0;
}