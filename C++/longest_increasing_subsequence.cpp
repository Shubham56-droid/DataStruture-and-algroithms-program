#include<bits/stdc++.h>
using namespace std;



int search(vector<int>&dp, int s, int e, int k)
{
	while (s < e)
	{
		int m = (s + e) / 2;

		if (dp[m] < k)
			s = m + 1;
		else
			e = m;
	}
	return s;
}
int lengthOfLIS(vector<int>& nums) {
	int n = nums.size();
	int ans = 1;
	vector<int>dp(n, 0);

	dp[0] = nums[0];

	for (int i = 0; i < n; i++)
	{
		int ind = search(dp, 0, ans, nums[i]);
		dp[ind] = nums[i];

		if (ind == ans)ans++;
	}

	return ans;

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);

#endif

	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++)
		cin >> nums[i];
	int ans = lengthOfLIS(nums);
	cout << ans;
	return 0;

}