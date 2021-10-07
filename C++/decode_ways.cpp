#include<bits/stdc++.h>
using namespace std;



int numDecodings(string s) {
	int n = s.length();
	vector<int>dp(n + 1, 0);

	dp[0] = 1;
	dp[1] = s[0] == '0' ? 0 : 1;

	for (int i = 2; i <= n; i++)
	{
		dp[i] = 0;
		if (s[i - 1] != '0')
			dp[i] = dp[i - 1];

		if (s[i - 2] == '1' || s[i - 2] == '2' && s[i - 1] <= '6')
			dp[i] += dp[i - 2];
	}

	return dp[n];

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);

#endif

	string s;
	cin >> s;
	int ans = numDecodings(s);
	cout << ans;
	return 0;

}