// This code prints the longest common subsequence between two strings using dp
#include<bits/stdc++.h>
using namespace std;

string printlongestsequence(string a, string b)
{
    int n=a.length(), m=b.length();
    int dp[n+1][m+1];

    // initialising dp matrix
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }
        }
    }

    //filling dp matrix
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i-1]==b[j-1])
                dp[i][j]= 1+ dp[i-1][j-1];
            else
                dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
        }
    }

    string ans="";
    int i=n,j=m;

    //finding longest subsequence
    while(i>0 && j>0)
    {
        if(a[i-1]==b[j-1])
        {
            ans.push_back(a[i-1]);
            i--, j--;
        }
        else{
            if(dp[i-1][j] > dp[i][j-1])
                i--;
            else
                j--;
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;


}

int main()
{
    string a="abcdgh";
    string b="abldho";

    cout<< printlongestsequence(a,b);
    return 0;
}
