#include<bits/stdc++.h>
using namespace std;



int longestValidParentheses(string s) {
	int n = s.length();
	stack<int>st;
	st.push(-1);
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '(')
			st.push(i);
		else
		{
			st.pop();
			if (st.empty())st.push(i);
			else
				res = max(res, i - st.top());
		}
	}

	return res;

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);

#endif

	string s;
	cin >> s;
	int ans = longestValidParentheses(s);
	cout << ans;
	return 0;

}