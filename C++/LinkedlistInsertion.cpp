#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
};

/* It inserts a new node to the front of the linked list */
void Insert_Front(Node** head, int node_data)
{
	Node* temp_node = new Node();
	temp_node->data = node_data;
	temp_node->next = *head;
	*head = temp_node;
}

/* It inserts a new node after the given previous node */
void Insert_After(Node* prev_node, int node_data)
{
	if (prev_node == NULL)
	{
		cout<<"Node cannot be inserted as the prev_node is NULL";
		return;
	}

	Node* temp_node = new Node();
	temp_node->data = node_data;
	temp_node->next = prev_node->next;
	prev_node->next = temp_node;
}

/* It inserts the new node at the end */
void Insert_Last(Node** head, int node_data)
{
	Node* temp_node = new Node();
	
	temp_node->data = node_data;
	temp_node->next = NULL;

	
	if (*head == NULL)
	{
		*head = temp_node;
		return;
	}


    	Node *i = *head; 
	while (i->next != NULL)
		i = i->next;

	i->next = temp_node;
	return;
}

int main()
{
	Node* head = NULL;
	
   	 // Add 18 to the front
	Insert_Front(&head, 18);
	//sequence --> 18

	// Add 14 to the last.
	Insert_Last(&head, 14);
	//sequence --> 18, 14

	// Add 5 to the front.
	Insert_Front(&head, 5);
	//sequence --> 5, 18, 14
	
	// Insert 10 after 5 so the previous node will be the node which the head is pointing.
	Insert_After(head, 10);
	//sequence --> 5, 10, 18, 14

   	 // Insert 13 after 18 
	Insert_After(head->next->next, 13);
    	//sequence --> 5, 10, 18, 13, 14
    
	cout<<"The final linked list after performing the different types of insertion is: ";

	Node *temp = head; 
	while (temp != NULL)
	{
		cout<<" "<<temp->data;
		temp = temp->next;
	}
	
	return 0;
}
