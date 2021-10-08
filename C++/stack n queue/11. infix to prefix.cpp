/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
char st[100],top=-1;
void push(char c)
{
	st[++top]=c;
}
char pop()
{
	return st[top--];
}
char peek()
{
	return st[top];
}
int prec(char c)
{
	 if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/'||c=='%') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1;
}
string solve(string s)
{
//	s='('+s+ ')';
	string ns;
      for(int i=0;i<s.size();i++)
	  {
	  	if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
	  	ns+=s[i];
	  	else if(s[i]=='(')
	  	push(s[i]);
	  	else if(s[i]==')')
	  	{
	  		while(top!=-1&& peek()!='(')
	  		{
	  			char a=pop();
	  			ns+=a;
			  }
			  if(peek()=='(')
			  {
			  	char a= pop();
			  }
		  }
		  else
		  {
		  	while(top!=-1&&prec(s[i])<=prec(peek()))
		  	{
		  		char a=pop();
		  		ns+=a;
			  }
			  push(s[i]);
		  }
		  }	
		  while(top!=-1)
		  {
		  	char a=pop();
		  	ns+=a;
		  }
		  //cout<<ns;
		 return ns;
}

string infixtoprefix(string s)
{
	reverse(s.begin(),s.end());
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='(')
		{
	    	s[i]=')';
		 i++;
	}
		else if(s[i]==')')
		{
		
		s[i]='('; 
		i++;
	}
	}
	string op= solve(s);
	
	reverse(op.begin(),op.end());
	return op;
}
int main()
{
	cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare ram\nrama rama hare hare\n";
   string s,a;
   cin>>s;
  cout<<infixtoprefix(s);
   
   return 0;
}
