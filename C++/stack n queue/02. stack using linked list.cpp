/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;

int op,n,val;
class Stack{
	public:
		int data;
		struct Stack *next;		
		Stack(int n)
		{
			data=n;
		}
};	
Stack *top=NULL;
Stack *push(int n)
{
	Stack *p = new Stack(n);
	if(top==NULL)
	{
		p->next=NULL;
		top=p;
	}
	else
	{
		p->next= top;
		top=p;
	}
	return top;
}

Stack *pop()
{
	Stack *p=top;
	if(top==NULL)
	cout<<"Stack underflow\n";
	else
	{
		top=top->next;
		cout<<"popped value is "<<p->data<<endl;
		free(p);
	}
	return top;
}
int peek()
{
	if(top==NULL)
	return -1;
	else
	return top->data;
}
void display()
{
	Stack *p;
	p=top;
	if(top==NULL)
	cout<<"stack is empty\n";
	else{
		while(p!=NULL)
		{
			cout<<p->data<<" ";
			p=p->next;
		}
		
		cout<<endl;
	}
}
int main()
{
   cout<<"hare krishna hare krishna krishna krishna hare hare\n";
   cout<<"hare rama hare rama rama rama hare\n";
   do{
   	cout<<"1. push\n";
   	cout<<"2. pop\n";
   	cout<<"3. peek\n";
   	cout<<"4. display stack\n";
   	cout<<"5. exit\n";
   	cin>>op;
   	switch(op)
   	{
   	  case 1:
   	  	cout<<"enter element to be pushed\n";
   	  	cin>>n;
   	  	top=push(n);
   	  	break;
   	  	
   	case 2:
   		top= pop();
   		break;
   	
   	case 3:
   		val= peek();
   		if(val!=-1)
   		cout<<val<<" is peek \n";
   		else
   		cout<<"stack is empty\n";
   		break;
   		
   	case 4:
   		display();
   		break;
   		
   	
   	  	
   	
   }
   	
   }while(op!=5);

   return 0;
}

