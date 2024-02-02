#include <stdio.h>

typedef struct Marks{
    int eng;
    int math;
    int bio;
}marks;

typedef struct Student{
    char name[20];
    int age;
    marks mark;
}student;

int main(){
    student st[10];
}