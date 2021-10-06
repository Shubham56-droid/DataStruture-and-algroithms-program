#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *first = NULL;

void create(int a[], int n)
{
    struct node *last;
    struct node *t;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

void reverse(struct node **head_ref) {
    struct node *temp = NULL;
    struct node *prev = NULL;
    struct node *current = (*head_ref);

    while(current != NULL) {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    (*head_ref) = prev;
}
 

int main(){
    
    int n;
    cout<<"Enter the length of the Linked List : ";
    cin>>n;
    cout<<endl;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
        cout<<endl;
    }
    
    create(a,n);
    cout<<"Before Reversing : "<<endl;
    display(first);

    reverse(&first);
    cout<<endl<<"After Reversing : "<<endl;
    display(first);
    cout<<endl;


    return 0;
}