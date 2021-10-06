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
 
    /* put in the data  */
    new_node->data  = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
 
// Counts the no. of occurences of a node
  
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
    /* Start with the empty list */
    struct Node* head = NULL;
    
    push(&head, 10);
    push(&head, 3);
    push(&head, 10);
    push(&head, 2);
    push(&head, 10);
    push(&head, 5);
    push(&head, 10);
    push(&head, 6);
    push(&head, 9);
    push(&head, 12);
    push(&head, 56);
    push(&head, 10);
 
    /* Check the count function */
    printf("Frequency of 10 is %d", count(head, 10));
    return 0;
}

// output 
// Frequency of 10 is 5
