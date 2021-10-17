#include<iostream>
using namespace std;

class node{
    public:
    int data; 
    node* prev;
    node* next;

    node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val)
{
    node* n = new node(val);
    if(head == NULL)
    {
        head =n;
        return ;
    }
    node* temp = head;
    while(temp->next !=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;

}

void insertAtHead(node* &head, int val)
{
    node* n = new node(val);
    n->next = head;
    head->prev = n;
    head = n;
}
void display(node* head)
{
    node* temp = head;
    while(temp !=NULL)
    {
        cout<<temp->data<<" <=> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void deleteAtHead(node* &head)
{
    node* nodetodelete= head;
    head = head->next;
    head->prev = NULL;

    delete nodetodelete;
}
void deleteNode(node* &head, int pos)
{
    if(pos ==1)
    {
        deleteAtHead(head);
        return ;
    }
    node* temp = head;
    int count=1;
    while(temp !=NULL && count !=pos)
    {
        temp=temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if(temp->next !=NULL)
    {
    temp->next = temp->prev;
    }
    delete temp;
}
int main()
{
    node* head =NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    cout<<"Circular Linked List : \n";
    display(head);

    cout<<"Insert at Head of the LL : \n";
    insertAtHead(head,5);
    display(head);

    cout<<"After Deleting a Node :\n";
    deleteNode(head,2);
    display(head);

    cout<<"Deleting the head : \n";
    deleteAtHead(head);
    display(head);
    return 0;
}