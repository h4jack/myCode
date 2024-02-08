//a program to implement stack using linked list.
#include <stdio.h>

#define MAX 10
int stack[MAX], top = -1;

int isEmpty(){
    return (top == -1);
}

int isFull(){
    return (top == MAX-1);
}

int peek(){
    return stack[top];
}

void push(int data){
    if(top == MAX-1) return; //Overflow.
    stack[++top] = data;
}

int pop(){
    if(top == -1) return -1; //Underflow.
    return stack[top--];
}

void display(){
    int i = top;
    while(i != -1){
        printf("%d -> ",stack[i]);    
        i--;
    }
    printf("NULL\n");
}

int main(){
    printf("%d %d\n",isEmpty(), isFull()); //will return 1 0 for empty stack and not full stack.
    push(10);
    push(12);
    push(15);
    display();
    pop();
    display();
    printf("%d %d\n",isEmpty(), isFull()); // will return 0 0 for not empty and not full.
    push(11);
    push(12);
    push(13);
    push(14);
    push(15);
    push(16);
    push(17);
    push(19);
    display();
    printf("%d %d\n",isEmpty(), isFull()); // will return 0 1 for not empty and full stack.
    return 0;
}