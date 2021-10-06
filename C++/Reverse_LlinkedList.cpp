#include <iostream>
using namespace std;

struct Node{

	int data;
	struct Node *next;

	Node(int data){
		this->data = data;
		next = NULL;
	}
}*head=NULL;

Node *reverseList(Node* head){

    struct Node *cur = head;
	struct Node *nex;
	struct Node *prev=NULL;

	while(cur!=NULL){

		nex=cur->next;
		cur->next=prev;
		prev=cur;
		cur=nex;
	}

	return prev;
}

void printList(struct Node* head){

	struct Node *p = head;

	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}


int main(){

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);
    head->next->next->next->next->next->next->next = new Node(8);
    
	cout<<"LinkedList = " ; 
	printList(head);

	cout<<"Reverse List = ";
	head = reverseList(head);
	printList(head);

    return 0;
}
