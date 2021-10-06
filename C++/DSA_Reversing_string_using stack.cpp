#include<bits/stdc++.h>

using namespace std;

string reverse(string s)
{
	string ans = "";
	stack<char> st;
	int n = s.length();		// length of string
	for (int i = 0 ; i < n ; i++)	// push into the stack upto last character
		st.push(s[i]);
	while (!st.empty())		// run till stack is not empty
	{
		ans += st.top();
		st.pop();
	}
	return ans;
}

int main()
{
	string s;
	cout << "Enter the string-";
	cin >> s;
	s = reverse(s);
	cout << s;	//output the string
	return 0;
}
