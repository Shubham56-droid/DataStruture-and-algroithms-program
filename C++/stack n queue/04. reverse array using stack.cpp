/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
int st[10],top=-1;

void push(int n)
{
	st[++top]=n;
}
int pop()
{
	return st[top--];
}

int main()
{
   cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
   cin>>a[i];
   push(a[i]);
}
   
   for(int i=0;i<n;i++)
   {
   	a[i]=pop();
   }
   cout<<"reverse array is\n";
   for(int i=0;i<n;i++)
   cout<<a[i]<<" ";
   
   

   return 0;
}

