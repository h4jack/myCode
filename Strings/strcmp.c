//write a program to implement the strcmp function.
#include <stdio.h>

//remember small case always bigger then big case letter.
//cause the comperision is based on the ascii value.
int strcmp(char str1[], char str2[]){
    int i = 0;
    while(str1[i] != '\0' || str2[i] != '\0'){
        if(str1[i] > str2[i]){
            return 1;
        }
        if(str1[i] < str2[i]){
            return -1;
        }   
        i++;
    }if(str1[i] == str2[i]){
        return 0;
    }else if(str2[i] == '\0'){
        return 1;
    }else if(str1[i] == '\0'){
        return -1;
    }
}

int main(){
    char name1[] = "AJohn";
    char name2[] = "Joshn";
    int cmp = strcmp(name1,name2);
    if(cmp == 0){
        printf("Equeal\n");
    }else if(cmp < 0){
        printf("Less Then\n");
    }else{
        printf("Greater Then");
    }
    return 0;
}