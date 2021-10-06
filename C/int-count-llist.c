#include<stdio.h>
#include<stdlib.h>

struct llist
{
	int value;
	struct llist* next;

};

int main()
{
	int i, n, num, s, t, count = 0;

	struct llist* head = (struct llist*)malloc(sizeof(struct llist));
	struct llist* prev = (struct llist*)malloc(sizeof(struct llist));
	prev = head;

	printf("No of terms in linked list: ");
	scanf("%d", &n);
	
	printf("\nEnter list values:\n");
	scanf("%d",&t);
	prev->value = t;
	prev->next = NULL;

	for(i=1;i<n;i++)
	{
		struct llist* new = (struct llist*)malloc(sizeof(struct llist));
		prev->next = new;
		scanf("%d",&t);
		new->value = t;
		new->next = NULL;
		prev = prev->next;
	}

	printf("\nEnter the value to be counted: ");
	scanf("%d",&s);

	prev = head;
	while(prev != NULL)
	{
		if(prev->value == s)
			count++;
		prev = prev->next;
	}
	printf("\nThe value %d occurs %d times.\n",s,count);
	return 0;
}