//write a program to implement singly linked list.
#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList{
    int data;
    struct LinkedList *next;
}list;

char isEmpty(list *head){
    if(head)
        return 0;
    return 1;
}

int len(list *head){
    int count = 0;
    while(head){
        head = head->next;
        count++;
    }
    return count;
}

int find(list *head, int data){
    int i = 0;
    while(head){
        if(head->data == data){
            return i;
        }
        i++;
        head = head->next;
    }
    return -1;
}


void push_top(list **head, int data){
    list *new_node = malloc(sizeof(list*));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void push_back(list **head, int data){
    list *new_node = malloc(sizeof(list*));
    new_node->data = data;
    if(!*head){
        new_node->next = *head;
        *head = new_node;
        return;
    }
    list *temp = *head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = NULL;
}

void push_at(list **head, int index, int data){
    int l = len(*head);
    if(index < 0 || index > l){
        printf("Index out of range.\n");
        return;
    }

    list *new_node = malloc(sizeof(list*));
    new_node->data = data;
    
    if(index == 0){
        new_node->next = *head;
        *head = new_node;
        return;
    }

    list *temp = *head, *prev = NULL;
    int i = 0;
    while(i < index){
        prev = temp;
        temp = temp->next;
        i++;
    }
    prev->next = new_node;
    new_node->next = temp; 
}

void update(list *head, int index, int new_data){
    if(isEmpty(head)){
        printf("list is empty.\n");
        return;
    }

    int i = 0;
    while(head){
        if(i == index){
            head->data = new_data;
            return;
        }
        i++;
        head = head->next;
    }
    printf("index out of range.\n");
}

int pop_top(list **head){//make sure your list is not empty before passing any argument.
    list *temp = *head;
    *head = (*head)->next;
    int data = temp->data;
    free(temp);
    return data;
}

int pop_back(list **head){
    if(!(*head)->next){
        int data = (*head)->data;
        free(*head);
        *head = NULL;
        return data;
    }
    list *temp = *head;
    while(temp->next->next){
        temp = temp->next;
    }
    int data = temp->next->data;
    free(temp->next);
    temp->next = NULL;
    return data;

}


int pop_at(list **head,int index){
    int l = len(*head);
    if(index < 0 || index >= l){
        printf("index out of range.\n");
        return -1;
    }

    list *temp = *head, *prev = NULL;
    int i = 0;
    int data;
    if(i == index){
        data = temp->data;
        *head = temp->next;
        free(temp);
        return data;
    }

    while(i < index){
        prev = temp;
        temp = temp->next;
        i++;
    }
    prev->next = temp->next;
    data = temp->data;
    free(temp);
    return data;
}

//display function for displaying all the element of the list.
void display(list *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}


//main function for checking all the functioin is working or not.
int main(){
    list *l1 = NULL;
    for(int i = 0; i < 10; i++){
        push_top(&l1,i);
    }
    printf("Inserting from top 0 to 9\n");
    display(l1);
    for(int i = 0; i < 5; i++){
        pop_top(&l1);
    }
    printf("Deleting from top 5 to 9\n");
    display(l1);

    l1 = NULL;

    for(int i = 0; i < 10; i++){
        push_back(&l1,i);
    }
    printf("Inserting from bottom 0 to 9\n");
    display(l1);
    for(int i = 0; i < 5; i++){
        pop_back(&l1);
    }
    printf("Deleting from bottom 5 to 9\n");
    display(l1);

    printf("the length of the list is %d\n",len(l1));
    push_at(&l1, 3, 8);
    printf("list after inserting 8 at index 3\n");
    display(l1);
    if(find(l1,3) != -1){
        printf("the element 3 found at index %d of the list\n",find(l1, 3));
    }
    printf("the list after deleting element of index 4\n");
    pop_at(&l1,4);
    display(l1);
    printf("the list after updating element of index 4 to 17\n");
    update(l1, 4, 17);
    display(l1);
    if(isEmpty(l1)){
        printf("list is empty");
    }else{
        printf("list is not empty");
    }
    return 0;
}