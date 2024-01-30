//write a program to implement strcpy function of c.
#include <stdio.h>

//copy str2 to str1;
void strcopy(char str1[], char str2[]){
    int i = 0;
    while(str2[i] != '\0'){
        str1[i] = str2[i];
        i++;
    }
    str1[i] = str2[i];
}

int main(){
    char name1[10];
    char name2[] = "Steve";
    strcopy(name1,name2);
    printf("%s\n",name1);
    printf("%s\n",name2);
    strcopy(name1,"Hello World!");
    printf("%s",name1);
    return 0;
}