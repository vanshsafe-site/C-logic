#include <stdio.h>
#include <stdlib.h> //library for malloc
struct node{//creating a structure
    int data; //initialize data as an integer
    struct node *next; // initialize next
};
void insert(struct node **head,int value){//formula for insert
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
    
}
void delete(struct node **head){//formula for delete
    struct node *temp = *head;
    *head = temp->next;
}
int main() {
    struct node *head = NULL;
    struct node *temp;//for traversal
    insert(&head,20);
    insert(&head,30);
    insert(&head,40);
    insert(&head,50);

    delete(&head);
    temp = head;//for traversal
    while(temp != NULL){//traversal loop
        printf("%d\n",temp->data);
        temp = temp->next;
    }
    return 0;
}
