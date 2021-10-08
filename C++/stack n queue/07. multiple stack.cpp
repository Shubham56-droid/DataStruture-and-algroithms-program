/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
#define max 10
int st[max],op,n,val,topa=-1,topb=max;	
using namespace std;
void pusha(int n)
{
	if(topa==topb-1)
	cout<<"stack a overflow\n";
	else{
		st[++topa]=n;
			}
}
void pushb(int n)
{
	if(topb-1==topa)
	cout<<"stack b overflow\n";
	else{
		st[--topb]=n;
	}
}
int popa()
{
	if(topa==-1)
	cout<<"stack a underflow\n";
	else{
		return st[topa--];
	}
}
int popb()
{
	if(topb==max)
	cout<<"stack b underflow\n";
	else{
		return st[topb++];
	}
}
int peeka()
{
	if(topa==-1)
	cout<<"stack a underflow\n";
	else
	return st[topa];
}
int peekb()
{
	if(topb==max)
	cout<<"stack b underflow\n";
	else
	return st[topb];
}
void displaya()
{
	if(topa==-1)
	cout<<"stack a is empty\n";
	else{
	for(int i=topa;i>=0;i--)
	cout<<st[i]<<" ";
	cout<<endl;
}
}
void displayb()
{
	if(topb==max)
	cout<<"stack b is empty\n";
	else{
	for(int i=topb;i<max;i++)
	cout<<st[i]<<" ";
	cout<<endl;
}
}
int main()
{
	cout<<"hare krishna hare krishna krishna krishna hare hare\nhare rama hare rama rama rama hare hare\n";
   do{
   	cout<<"choose the option \n";
   	cout<<"1. push in stack a\n";
   	cout<<"2. push in stack b\n";
   	cout<<"3. pop from stack a\n";
    cout<<"4. pop from stack b\n";
    cout<<"5. peek in stack a\n";
    cout<<"6. peek in stack b\n";
    cout<<"7. display stack a\n8. display stack b\n9. exit\n";
    cin>>op;
    switch(op)
    {
    	case 1:
    		cout<<"enter element to be pushed in stack a\n";
    		cin>>n;
			pusha(n);
			break;
		case 2:
			cout<<"enter element to be pushed in stack b\n";
    		cin>>n;
			pushb(n);
			break;
		case 3:
			val=popa();
			cout<<"popped element from stack a is "<<val<<endl;
			break;
		case 4:
				val=popb();
			cout<<"popped element from stack b is "<<val<<endl;
			break;
		case 5:
				val=peeka();
			cout<<"peek element in stack a is "<<val<<endl;
			break;
		case 6:
				val=peekb();
			cout<<"peek element in stack b  is "<<val<<endl;
			break;
		case 7:
			displaya();
			break;
		case 8:
			displayb();
			break;
}
   }while(op!=9);
   

   return 0;
}

