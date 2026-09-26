// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
void insert(struct node **head,int value){
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data= value;
    newNode->next= *head;
    *head = newNode;
}
void deleteNode(struct node **head){
    struct node *temp = *head;
    *head = temp->next;
    free(temp);
}
int main() {
    struct node *head = NULL;
    struct node *temp;
    insert(&head,20);
    insert(&head,30);
    deleteNode(&head);
    insert(&head,40);
    temp = head;
    while(temp!=NULL){
        printf("%d \n",temp->data);
        temp = temp->next;
    }
    return 0;
}
