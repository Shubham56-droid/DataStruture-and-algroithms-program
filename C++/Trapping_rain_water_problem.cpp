#include<bits/stdc++.h>
using namespace std;



int trap(vector<int>& height) {
	int n = height.size();
	if (n == 0)
		return 0;
	int left[n], right[n], ans[n];
	int h = height[0];
	left[0] = height[0];
	for (int i = 1; i < n; i++)
	{
		if (height[i] > h)
			h = height[i];
		left[i] = h;
	}
	right[n - 1] = height[n - 1];
	h = height[n - 1];
	for (int i = n - 2; i >= 0; i--)
	{
		if (height[i] > h)
			h = height[i];
		right[i] = h;
	}
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		ans[i] = min(left[i], right[i]) - height[i];
		s = s + ans[i];
	}
	return s;

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);

#endif

	vector<int> height;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		height.push_back(a);
	}

	int ans = trap(height);
	cout << ans;
	return 0;

}