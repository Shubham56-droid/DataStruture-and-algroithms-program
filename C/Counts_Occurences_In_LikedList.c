// C program to count int  occurrences in a linked list 
#include<stdio.h> 
#include<stdlib.h> 
  
/* Link list node */
struct Node 
{ 
    int data; 
    struct Node* next; 
}; 
  

void push(struct Node** head_ref, int new_data) 
{ 
    /* allocate node */
    struct Node* new_node = 
            (struct Node*) malloc(sizeof(struct Node)); 
  
   
    new_node->data  = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref)    = new_node; 
} 
  
/* Counts the no. of occurences of a node 
   (search_for) in a linked list (head)*/
int count(struct Node* head, int search_for) 
{ 
    struct Node* current = head; 
    int count = 0; 
    while (current != NULL) 
    { 
        if (current->data == search_for) 
           count++; 
        current = current->next; 
    } 
    return count; 
} 
  

int main() 
{ 
   
    struct Node* head = NULL; 
  
  
    push(&head, 1); 
    push(&head, 3); 
    push(&head, 1); 
    push(&head, 2); 
    push(&head, 1); 
  
   
    printf("count of 1 is %d", count(head, 1)); 
    
    
    return 0; 
} 
