//Time Complexity - O(n^2);
//space Complecxity - O(n);
#include<bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        int dp[n];
        for(int i=0;i<n;i++)
        {
            dp[i] = 1;
            for(int j=0;j<i;j++)
            {
                if(nums[j] < nums[i])
                {
                    dp[i] = max(dp[i] , 1+dp[j]);
                }
            }
            ans = max(ans,dp[i]);
        }
        return ans;
    }

int main(){
    int n ;
    cin >> n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }

    int ans = lengthOfLIS(nums);
    cout << ans << endl;
}