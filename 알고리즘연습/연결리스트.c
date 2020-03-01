#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
struct node *last;
struct node *head;

void insert(int position, int data){
    struct node *element = malloc(sizeof(struct node));
    element->data = data;
    
    int i;
    struct node *insert = head;
    for(i = 0; i < position - 1; i++){
        insert = insert->next;
    }
    element->next = insert->next;
    insert->next = element;
}

void insert_last(int data){
    struct node *element = malloc(sizeof(struct node));
    element->data = data;
    element->next = NULL;
    last->next = element;
    last = element;
}

void delete_data(int position){
    int i;
    struct node *insert = head;
    for(i = 0; i < position - 1; i++){
        insert = insert->next;
    }
    struct node *fd = insert->next;
    
    insert->next = insert->next->next;
    
    free(fd);
}

int main(){
    head = malloc(sizeof(struct node));
    
    last = head;
    
    insert_last(10);
    insert_last(20);
    
    insert(1, 30);
    
    delete_data(2);
    
    struct node *curr = head->next;
    while(curr != NULL){
        printf("%d\n", curr->data);
        curr = curr->next;
    }
    
    curr = head;
    while(curr != NULL){
        struct node *fd = curr;
        free(fd);
        curr = curr->next;
    }
}
