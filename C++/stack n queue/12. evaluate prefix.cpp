#include<bits/stdc++.h>
using namespace std;
void solve(string s)
{
	stack<int>st;
	
	for(int i=s.size()-1;i>=0;i--)
	{
		if(s[i]>='0'&&s[i]<='9')
		st.push(s[i]-'0');
		else
		{
			int b= st.top(); st.pop();
			int a= st.top(); st.pop();
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
	cout<<st.top();
}
int main()
{
	string s;
	cin>>s;
	solve(s);
	return 0;
}


