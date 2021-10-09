#include <bits/stdc++.h>
using namespace std;

int pickToys(string str, int n, const int k)
{
    int i = 0;
    int j = 0;
    int ans = INT_MIN;
    unordered_map<char, int> mp;

    if (k > n)
    {
        return -1;
    }

    while (j < n)
    {
        mp[str[j]]++;
        if (mp.size() < k)
        {
            j++;
        }
        else if (mp.size() == k)
        {
            ans = max(ans, j - i + 1);
            j++;
        }
        else if (mp.size() > k)
        {
            while (mp.size() > k)
            {
                mp[str[i]]--;
                if (mp[str[i]] == 0)
                {
                    mp.erase(str[i]);
                }
                i++;
            }
            j++;
        }
    }
    return ans;
}

int main()
{
    string str = {"abaccab"}; // arrray of toys
    int n = str.size();
    const int k = 2; // becoz he can select only two types of toys.

    cout << "The maximum number of toys that John could have is: " << pickToys(str, n, k);

    return 0;
}