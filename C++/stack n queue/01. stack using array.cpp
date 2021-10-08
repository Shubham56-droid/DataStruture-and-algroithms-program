/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
// ritik dagar

#include<bits/stdc++.h>
#define Max 5
using namespace std;
int st[Max],top=-1;
int op,val,n;
class stack{
	public:
		void push(int n)
		{
			if(top==Max-1)
			cout<<"stack overflow\n";
			else
			{
				cout<<"element is pushed into stack\n";
				st[++top]=n;
			}
		}
		int pop()
		{
			if(top==-1)
			cout<<"stack underflow\n";
			else{
			return st[top--];
		}
		}
	    
		int peek()
		{
			if(top==-1)
			cout<<"stack underflow\n";
			else{
			return st[top];
		}
		}
		void display()
		{
			if(top==-1)
			cout<<"stack is empty\n";
			else{
			cout<<"value in stack is\n";
		for(int i=top;i>=0;i--)
		cout<<st[i]<<" ";
		cout<<endl;
		}
	}
}s;
int main()
{
  cout<<"hare krishna hare krishna krishna krishna hare hare\n";
   cout<<"hare rama hare rama rama rama hare\n";
  do{
   cout<<"enter your choice \n";
   cout<<"1. Push\n";
   cout<<"2. Pop\n";
   cout<<"3. Peek\n";
   cout<<"4. Display\n";
   cout<<"5. exit\n";
   cin>>op;
   switch(op)
   {
   	case 1:
   		cout<<"enter element to be push on stack\n";
   		cin>>n;
   		s.push(n);
   		break;
   	case 2:
   		val=s.pop();
   		if(val!=-1)
   		cout<<"deleted value is "<<val<<endl;
   		break;
   	case 3:
   		val=s.peek();
   		if(val!=-1)
   		cout<<"top value is "<<val<<endl;
   		break;
   	case 4:
   		s.display();
   		break;
   		
   }
   }while(op!=5);
   
   return 0;
}

