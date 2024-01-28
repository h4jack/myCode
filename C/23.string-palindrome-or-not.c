//WAP to reverse a number.
#include <stdio.h>
#include <string.h>

void revnum();
void revstring();

int main(){
    printf("Enter\n1. for string \n2. for number \n");
    char c;
    scanf("%c",&c);
    if(c == '1'){
        revstring();
    }else if(c == '2'){
        revnum();
    }else{
        printf("Wrong input please restart the program");
    }
    return 0;
}
void revnum(){
    printf("Enter your number : ");
    int n,a = 0;
    scanf("%d",&n);
    int n1 = n;


    loop:
        a = (a*10) + (n%10);
        n = n/10;
    if(n>=1)
    goto loop;


    if(n1 == a)
    printf("The number %d is Palindrome",a);
    else
    printf("The number %d is not a Palindrome number",a);

}


void revstring(){
    char str[40];
    printf("Enter your string : ");
    scanf("%s",&str);

    //length of string
    int len;
    for(int i = 0;;i++){
        if(str[i] == '\0'){
            len = i-1;
            break;
        }
       
    }
    char str1[40];
    int i;
    for(i = 0;str[i] != '\0';i++){
        str1[i] = str[i];
    }
    str1[i] = '\0';

    //reversing the string
    char temp;
    for(int i = 0;i<(len/2);i++){
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        len--;
    }
    //comparing two string is they are equels to each other.
    for(int i = 0;!(str[i] == '\0');i++){
        if(str[i] == str1[i]){
            continue;
        }else {
            printf("%s is not a palinrome cause the reverse of %s is %s",str1,str1,str);
            return;
        }
    }
    printf("%s is a palinrome cause the reverse of %s is %s",str1,str1,str);
    return;
}