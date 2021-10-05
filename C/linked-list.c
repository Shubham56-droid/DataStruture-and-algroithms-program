#include <stdio.h>
#include <stdlib.h>

// Linked-list node
struct node{
    int data;
    struct node *next;
};

/**
* @brief inserts an element in the linked-list before the first element
* @param head head of linked-list
* @param data value to be inserted
* @return void
*/
void push(struct node **head, int data){
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data=data;

    new_node->next=*head;
    *head=new_node;

    return;
}

/**
* @brief inserts an element in the linked-list after the last element
* @param head head of linked-list
* @param data value to be inserted
* @return void
*/
void append(struct node** head, int data){
    struct node *temp=*head, *new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next=NULL;

    if(*head==NULL){
        *head=new_node;
        return;
    }

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=new_node;

    return;
}

/**
* @brief inserts an element in the linked-list after the specified element
* @param head head of linked-list
* @param val value of element after which it is to be inserted
* @param data value to be inserted
* @return void
*/
void insertAfter(struct node **head, int val, int data){
    if(*head==NULL){
        printf("List is empty\n");
        return;
    }

    struct node *temp = *head;

    while(temp!=NULL && temp->data!=val){
        temp=temp->next;
    }

    if(temp==NULL){
        printf("%d not found\n", val);
        return;
    }

    struct node *new_node = (struct node*) malloc(sizeof(struct node));

    new_node->data=data;
    new_node->next=temp->next;
    temp->next = new_node;

    return;
}

/**
* @brief deletes an element in the linked-list
* @param head head of linked-list
* @param data value to be deleted
* @return void
*/
void deleteNode(struct node **head, int val){
    if(*head==NULL){
        printf("List is empty\n");
        return;
    }

    struct node *temp = *head, *prev=NULL;

    while(temp!=NULL && temp->data!=val){
        prev=temp;
        temp=temp->next;
    }

    if(temp==NULL){
        printf("%d not found\n", val);
        return;
    }

    prev->next=temp->next;

    free(temp);

    return;
}

/**
* @brief prints the elements of the linked-list
* @param head head of linked-list
* @return void
*/
void print(struct node *head){
    while(head!=NULL){
        printf("%d ", head->data);
        head=head->next;
    }

    return;
}

int main(){
    struct node *head=NULL;

    append(&head, 5);
    push(&head, 11);
    append(&head, 4);
    insertAfter(&head, 5, 10);
    append(&head, 8);
    deleteNode(&head, 8);
    append(&head, 7);

    print(head);

    return 0;
}