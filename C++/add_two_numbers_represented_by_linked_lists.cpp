#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

void printList(struct Node *head){
    struct Node *p = head;

    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

Node *reverse(struct Node *head){

    struct Node *cur = head;
    Node *nex;
    Node *prev=NULL;

    while(cur!=NULL){
        nex=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nex;
    }
    head = prev;

    return head;
}

Node *addTwoList(struct Node *first ,struct Node *second){

    first = reverse(first);
    second = reverse(second);

    int c=0;
    int s=0;
    struct Node *temp;
    struct Node *cur=NULL;
    struct Node *res=NULL;

    while(first!=NULL || second!=NULL){

        s = c + (first?first->data:0) + (second?second->data:0);
        c = s>=10?1:0;
        s = s%10;

        Node *temp = new Node(s);
        if(res==NULL) res=temp;
        else cur->next=temp;
        cur=temp;

        if(first) first=first->next;
        if(second) second=second->next;

    }

    if(c>0){
        Node *temp = new Node(c);
        cur->next=temp;
        cur=temp;
    }


    res = reverse(res);

    return res;

}

int main(){
    
    
    Node* first = new Node(2);
    first->next = new Node(3);
    first->next->next = new Node(4);
    
    Node* second = new Node(3);
    second->next = new Node(4);
    second->next->next = new Node(5);

    cout<<"First list = ";
    printList(first);

    cout<<"\nSecond list = ";
    printList(second);

    Node *ans = addTwoList(first ,second);

    cout<<"\nAdd Two list = ";

    printList(ans);
    

    return 0;
}
