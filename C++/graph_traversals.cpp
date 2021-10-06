//implemented graph traversals BFS and DFS.

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
struct Node
{
    int data;
    Node *link;
};
struct ListHead
{
    int data;
    bool visited = false;
    Node *next;
};
ListHead insert(ListHead head, int num)
{
    Node *n = new Node();
    n->data = num;
    n->link = NULL;
    if (head.next == NULL)
    {
        head.next = n;
        // return n;
        return head;
    }
    else
    {
        Node *curr = new Node();
        curr = head.next;
        while (curr->link != NULL)
        {
            curr = curr->link;
        }
        curr->link = n;
        return head;
    }
}
class qNode
{
private:
public:
    int data;
    qNode *next;
    qNode(int dt)
    {
        next = NULL;
        data = dt;
    }
};

class Queue
{
private:
    qNode *rear, *front;
    int size;

public:
    Queue()
    {
        rear = front = NULL;
        size = 0;
    }
    void enqueue(int data);
    int dequeue();
    void print();
    bool is_empty();
};
bool Queue::is_empty()
{
    if (rear == NULL && front == NULL)
    {
        return true;
    }
    return false;
}
void Queue::enqueue(int data)
{
    // if( size == 10 )
    // {
    //     // cout<<"Queue Overflow";
    //     exit(0);
    // }
    size++;
    if (rear == NULL)
    {
        rear = front = new qNode(data);
        return;
    }
    rear->next = new qNode(data);
    rear = rear->next;
    return;
}

int Queue::dequeue()
{
    if (size == 0)
    {
        // cout<<"Queue Underflow";
        exit(0);
    }

    size--;
    int temp = front->data;
    if (rear == front)
    {
        delete (rear);
        rear = front = NULL;
        return (temp);
    }
    qNode *t = front->next;
    delete (front);
    front = t;
    return (temp);
}

void Queue::print()
{
    if (size == 0)
    {
        // cout<<"Queue is empty";
        exit(0);
    }
    qNode *t = front;

    while (t)
    {
        cout << t->data << " ";
        t = t->next;
    }
}
struct Stack
{
    int data;
    Stack *next;
};
Stack *push(Stack *head, int n)
{
    Stack *node = new Stack();
    node->data = n;
    node->next = NULL;
    if (head == NULL)
    {
        return node;
    }
    Stack *curr = new Stack();
    curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = node;
    return head;
}
int pop(Stack *head)
{
    if (head == NULL)
    {
        return 0;
    }
    Stack *curr = new Stack();
    Stack *pred = new Stack();
    curr = head;
    while (curr->next != NULL)
    {
        pred = curr;
        curr = curr->next;
    }
    pred->next = NULL;
    int index = curr->data;
    delete (curr);
    return index;
}
bool isempty(Stack *s)
{
    if (s == NULL)
    {
        return true;
    }
    return false;
}
void printlist(ListHead head)
{
    Node *curr = new Node();
    curr = head.next;
    cout << head.data << " ";
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->link;
    }
    cout << endl;
}

void BFS(ListHead graph[], int vertex)
{
    Queue q;
    q.enqueue(vertex);
    cout << graph[vertex - 1].data << " ";
    graph[vertex - 1].visited = true;
    int curr_node;
    while (!q.is_empty())
    {
        curr_node = q.dequeue();
        Node *curr = new Node();
        curr = graph[curr_node - 1].next;
        while (curr != NULL)
        {
            ListHead *curr_dest = graph + ((curr->data) - 1);
            if (curr_dest->visited == false)
            {
                cout << curr_dest->data << " ";
                q.enqueue(curr->data);
                curr_dest->visited = true;
            }
            curr = curr->link;
        }
    }
    cout << endl;
}
void DFS(ListHead graph[], int vertex)
{
    if (graph[vertex - 1].visited == true)
    {
        return;
    }
    graph[vertex - 1].visited = true;
    cout << graph[vertex - 1].data << " ";
    Node *curr = new Node();
    curr = graph[vertex - 1].next;
    while (curr != NULL)
    {
        ListHead *curr_dest = graph + ((curr->data) - 1);
        if (curr_dest->visited == false)
        {
            DFS(graph, curr_dest->data);
        }
        curr = curr->link;
    }
}
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int top, links;
    struct ListHead graph[n];
    for (int i = 0; i < n; i++)
    {
        graph[i].data = i + 1;
        graph[i].next = NULL;
    }
    int i = m;
    while (i--)
    {
        cin >> top >> links;
        graph[top - 1] = insert(graph[top - 1], links);
        graph[links - 1] = insert(graph[links - 1], top);
    }
    int j = 0;
    int vertex;
    cin >> vertex;
    BFS(graph, vertex);
    for (int i = 0; i < n; i++)
    {
        graph[i].visited = false;
    }
    DFS(graph, vertex);
    // while(j<n){
    //     printlist(graph[j]);
    //     j++;
    // }
    return 0;
}