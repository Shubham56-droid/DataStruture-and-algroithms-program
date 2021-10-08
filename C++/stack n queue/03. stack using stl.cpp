/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
int n,op;
int main()
{
	cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
	cout<<"stack using stl\n";
	stack<int> s1,s2,s3;
	do{
		cout<<"choose the option\n";
		cout<<"1. push in stack\n";
		cout<<"2. pop from stack\n";
		cout<<"3. top in stack\n";
		cout<<"4. size of stack\n";
		cout<<"5. swap stacks\n";
		cout<<"6. display stack\n";
		cout<<"7. exit\n";
		cin>>op;
		switch(op)
		{
			case 1:
				cin>>n;
				s1.push(n);
				s2.push(n*2);
				break;
			case 2:
				s1.pop();
				s2.pop();
				break;
			case 3:
				cout<<s1.top()<<endl;
				cout<<s2.top()<<endl;
				break;
			case 4:
				cout<<s1.size()<<endl;
				cout<<s2.size()<<endl;
				break;
			case 5:
				 swap(s1,s2);
				 break;
			case 6:
				cout<<"stack s1 is ";
				s3=s1;
				while(!s3.empty())
				{
					cout<<s3.top()<<" ";
					s3.pop();
				}
				cout<<endl;
				s3=s2;
			cout<<"stack s2 is ";
				while(!s3.empty())
				{
					cout<<s3.top()<<" ";
					s3.pop();
				}
				cout<<endl;
		}
	}while(op!=7);
   

   return 0;
}

