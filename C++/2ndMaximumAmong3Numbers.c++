#include<bits/stdc++.h>
#include<climits>
#include<algorithm>

using namespace std;

void solve(){
    // Storing Numbers in Array
    int a[3], minimum = INT_MAX, maximum = INT_MIN, result;

    // Taking Input
    cin>>a[0]>>a[1]>>a[2];

    // Sorting Array
    sort(a, a+3);

    cout<<a[1]<<endl;
}

int main(){
    // Number of Test Cases
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

// Code Submitted by Rohan Das - https://github.com/rohan26062001