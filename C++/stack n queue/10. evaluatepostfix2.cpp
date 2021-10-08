/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
class Stack{
	public:
		int data;
		Stack *next;
		Stack(int n)
		{
			data=n;
		}
};
Stack *top = NULL;

Stack *push(int n)
{
	Stack *s=new Stack(n);
	if(top!=NULL)
	{
		s->next=top;
		top=s;
	}
	else{
		top=s;
	}
}
int pop()
{
	Stack *s=top;
	top=top->next;
	int a= s->data;
	free(s);
	return a;
}
int solve(char *s)
{
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		top=push(s[i]-'0');
		else
		{
			int a= pop();
			int b= pop();
			switch(s[i])
			{
				case '+':
					top=push(b+a);
					break;
				case '-':
					top=push(b-a);
					break;
				case '*':
					top=push(b*a);
					break;
				case '/':
					top=push(b/a);
					break;
				
			}
		}
	}
	return pop();
}
int main()
{
   cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\n rama rama hare hare\n";                    
   
   char s[10];
   cin>>s;
   cout<<solve(s);
 
   return 0;
}

