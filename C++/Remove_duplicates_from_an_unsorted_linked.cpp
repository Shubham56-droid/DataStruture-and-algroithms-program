#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};

Node *removeDuplicates(Node *head)
{
	if (head == NULL)
	{
		return head;
	}
	unordered_map<int, bool> isPres;
	Node *prev = head;
	Node *curr = head;
	curr = curr->next;
	isPres[head->data] = 1;

	while (curr != NULL)
	{
		if (!isPres[curr->data])
		{
			prev->next = curr;
			prev = curr;
			isPres[curr->data] = 1;
		}
		curr = curr->next;
	}

	prev->next = NULL;
	return head;
}
