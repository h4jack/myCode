//write a program to find the grade of a student by his marks he obtained.
#include <stdio.h>

int main(){
    int n;
    printf("Enter the marks of the student: ");
    scanf("%d",&n);
    if(n > 100)
        printf("Wrong input");
    else if(n>=90)
        printf("Grade is O");
    else if(n>=80)
        printf("Grade is E");
    else if(n >=70)
        printf("Grade is A");
    else if(n >= 60)
        printf("Grade is B");
    else if(n >= 50)
        printf("Grade is C");
    else if(n >= 40)
        printf("Grade is D");
    else if(n < 40)
        printf("Grade is F");
    else if(n > 0)
        printf("Wrong input");
    else
        printf("Wrong input");
    return 0;
}