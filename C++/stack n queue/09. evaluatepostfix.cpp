/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;

int solve(char *s)
{
	stack<char>st;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		st.push(s[i]-'0');
		else
		{
			int a=st.top(); st.pop();
			int b=st.top(); st.pop();
			switch(s[i])
			{
				case '+':
					st.push(b+a);
					break;
				case '-':
					st.push(b-a);
					break;
				case '*':
					st.push(b*a);
					break;
				case '/':
					st.push(b/a);
					break;
			}
		}
	}
	return st.top(); 
}
int main()
{
   char s[10];
   cin>>s;
   cout<<solve(s);
   return 0;
}

