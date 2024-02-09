//write a program to implement multiple stack.

#include <stdio.h>
#define MAX 10

typedef struct Stack{
    int arr[MAX];
    int top;
}stack;

stack create(){
    stack st;
    st.top = -1;
    return st;
}

int isEmpty(stack st){
    int top = st.top;
    return (top == -1);
}

int isFull(stack st){
    int top = st.top;
    return (top == MAX-1);
}

int peek(stack st){
    return st.arr[st.top];
}

void push(stack *st, int data){
    if(st->top == MAX-1) return; //Overflow.
    st->arr[++(st->top)] = data;
}

int pop(stack *st){
    if(st->top == -1) return -1; //Underflow.
    return st->arr[st->top--];
}

void display(stack st){
    int i = st.top;
    while(i != -1){
        printf("%d -> ",st.arr[i]);    
        i--;
    }
    printf("NULL\n");
}

int main(){
    stack st = create();
    push(&st,10);
    push(&st,15);
    push(&st,12);
    display(st);
    pop(&st);
    pop(&st);
    pop(&st);
    stack st1 = create();
    push(&st1,11);
    push(&st1,13);
    push(&st1,18);
    display(st1);
    display(st);
    printf("%d is the top element of st1.\n",peek(st1));
    printf("%d is the isempty code of st.\n",isEmpty(st));
    printf("%d is the isfull code of st1.\n",isFull(st));
    return 0;
}