#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
void traversal(struct Node * ptr){
    while(ptr != 0){
    printf("%d\n",ptr->data);   
    ptr = ptr->next;   
    }
}
struct Node * insertAtHead(struct Node * head,int data){
    struct Node * ptr = (struct Node *)malloc (sizeof(struct Node*));
    ptr->next = head;
    ptr->data = data;
    return ptr;
    
}
struct Node * DeleteNode(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
int main() {
    struct Node * head;
    struct Node * second;
    struct Node * third;
    //allocating memory for nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 14;
    third->next = NULL;
    traversal(head);
    head = insertAtHead(head,20);
    traversal(head);
    head = DeleteNode(head);
    head = DeleteNode(head);
    traversal(head);
    return 0;
}
