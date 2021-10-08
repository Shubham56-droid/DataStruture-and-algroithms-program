#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

int length(node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

void insert_at_head(node *&head, int data) //passing head by ref to change it in the original function as well
{
    if (head == NULL)
    {
        head = new node(data);
        return;
    }
    node *n = new node(data);
    n->next = head;
    head = n;
}

void insert_at_tail(node *&head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
        return;
    }
    int l = length(head);
    node *temp = head;
    while (--l)
    {
        temp = temp->next;
    }
    node *n = new node(data);
    n->next = NULL;
    temp->next = n;
}

void insert_in_middle(node *&head, int data, int position)
{
    if (head == NULL or position == 0)
    {
        insert_at_head(head, data);
        return;
    }
    else if (position > length(head))
    {
        insert_at_tail(head, data);
        return;
    }
    else
    {
        node *temp = head;
        while (--position)
        {
            temp = temp->next;
        }
        node *n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
}

void search1(node *head, int d)
{
    if (head == NULL)
        return;
    int pos = 0;
    while ((head->data) != d)
    {
        head = head->next;
        pos++;
    }
    if (pos + 1)
        cout << "\nThe element is present at position -> " << pos + 1;
    else
        cout << "\nNot found";
}

int search(node *head, int d)
{
    if (head == NULL)
        return -1;
    int pos = 0;
    while ((head->data) != d)
    {
        head = head->next;
        pos++;
    }
    return pos;
}

node *search2(node *head, int d)
{
    if (head == NULL)
        return NULL;
    int pos = 0;
    while ((head->data) != d)
    {
        head = head->next;
        pos++;
    }
    return head;
}

void delete_head(node *&head)
{
    if (head == NULL)
        return;
    node *tmp = head->next;
    delete head;
    head = tmp;
}

void delete_tail(node *&head)
{
    if (head == NULL)
        return;
    int l = 0;
    node *temp = head;
    while (l < length(head) - 2)
    {
        temp = temp->next;
        l++;
    }
    node *tmp = temp->next;
    temp->next = NULL;
    delete tmp;
}

void delete_middle(node *&head, int data)
{
    if (head == NULL)
        return;
    int pos = 0;
    node *temp = head;
    while (pos < search(head, data) - 1)
    {
        temp = temp->next;
        pos++;
    }
    node *tmp = temp->next;
    temp->next = tmp->next;
    delete tmp;
}

void print(node *head) //passing by value only
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
}

void reverse_it(node *&head)
{
    if (head == NULL or head->next == NULL)
        return;
    node *prev = NULL;
    node *curr = head;
    while (curr != NULL)
    {
        node *n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }
    head = prev;
}

node *reverse_recur(node *head)
{
    if (head->next == NULL or head == NULL)
        return head;
    node *small_head = reverse_recur(head->next); //recursive call
    node *temp = head->next;                      // 1->2->3->5 (here 5 will be small head & to get *temp we just do current_head->next*)
    head->next = NULL;
    temp->next = head;
    return small_head;
}

void remove_dup(node *head)
{
}
node *midpoint(node *head)
{
    if (head == NULL or head->next == NULL)
        return head;
    node *fast = head->next;
    node *slow = head;
    while (fast != NULL and fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

int kth_node_end(node *head, int k)
{
    if (head == NULL)
        return -1;
    node *fast = head;
    node *slow = head;
    while (k--)
        fast = fast->next;
    while (fast != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow->data;
}

void swap_two_nodes(node *head, int x, int y)
{
    if (x == y)
        return;
    node *prevx = NULL, *currx = head;
    while (currx && currx->data != x)
    {
        prevx = currx;
        currx = currx->next;
    }
    node *prevy = NULL, *curry = head;
    while (curry && curry->data != y)
    {
        prevy = curry;
        curry = curry->next;
    }
    if (prevx != NULL)
        prevx->next = curry;
    else
        head = curry;
    if (prevy != NULL)
        prevy->next = currx;
    else
        head = currx;

    node *temp = curry->next;
    curry->next = currx->next;
    currx->next = temp;
}

node *merge_two_sorted_ll(node *a, node *b)
{
    if (a == NULL)
        return b;
    if (b == NULL)
        return a;
    node *c;
    if (a->data < b->data)
    {
        c = a;
        c->next = merge_two_sorted_ll(a->next, b);
    }
    else
    {
        c = b;
        c->next = merge_two_sorted_ll(a, b->next);
    }
    return c;
}
node *merge_sort(node *head)
{
    if (head == NULL or head->next == NULL)
        return head;
    // find mid
    node *mid = midpoint(head);
    //divide it into two parts
    node *a = head;
    node *b = mid->next;

    mid->next == NULL;
    //recursively sort the two divided LL
    a = merge_sort(a);
    b = merge_sort(b);
    // merge the two sorted parts together
    node *c = merge_two_sorted_ll(a, b);

    return c;
}
int main()
{
    int option;
    node *head = NULL;
    cout << "Enter the operation you would like to perform" << '\n';
    do
    {
        printf("\n 1.Insert at head");
        printf("\n 2.Insert at tail");
        printf("\n 3.Insert in Middle");
        printf("\n 4.Print the list");
        printf("\n 5.Delete element from head");
        printf("\n 6.Delete element from tail");
        printf("\n 7.Delete an element in the middle");
        printf("\n 8.Search an Element");
        printf("\n 9.Swap two nodes");
        printf("\n 10.Kth node from End");
        printf("\n 11.Merge sort LL");
        printf("\n 12.EXIT");

        printf("\n\nEnter your choice :: ");
        cin >> option;
        switch (option)
        {
        case 1:
            printf("\n Enter any element to insert :: ");
            int n;
            cin >> n;
            insert_at_head(head, n);
            break;
        case 2:
            printf("\n Enter any element to insert :: ");
            int g;
            cin >> g;
            insert_at_tail(head, g);
            break;
        case 3:
            printf("\n Enter any element to insert :: ");
            int h;
            cin >> h;
            printf("\n Enter the position to insert :: ");
            int m;
            cin >> m;
            insert_in_middle(head, h, m);
            break;
        case 4:
            print(head);
            break;
        case 5:
            delete_head(head);
            break;
        case 6:
            delete_tail(head);
            break;
        case 7:
            printf("\n Enter any element to delete :: ");
            int i;
            cin >> i;
            delete_middle(head, i);
            break;
        case 8:
            printf("\n Enter any element to search :: ");
            int k;
            cin >> k;
            search1(head, k);
            break;
        case 9:
            printf("\n Enter first element :: ");
            int l;
            cin >> l;
            printf("\n Enter second element :: ");
            int q;
            cin >> q;
            swap_two_nodes(head, l, q);
            break;
        case 10:
            printf("\n Enter the position of node :: ");
            int b;
            cin >> b;
            cout << "the data from at the kth node from end is-> " << kth_node_end(head, b);
            break;
        case 11:
        {
            node *op = merge_sort(head);
            print(op);
            break;
        }
        case 12:
        {
            exit(0);
            break;
        }
        }
    } while (1);

    return 0;
}