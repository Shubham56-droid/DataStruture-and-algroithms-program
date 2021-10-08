 // Q. Given an array, rotate the array by one position in clock-wise direction.
 

// Example 1:

// Input:
// N = 5
// A[] = {1, 2, 3, 4, 5}
// Output:
// 5 1 2 3 4




#include <bits/stdc++. h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int s;
        cin>>s;
        int a[s];
        for(int j=0;j<s;j++)
        cin>>a[j];
        cout<<a[s-1]<<" ";
        for(int j=0;j<s-1;j++)
        cout<<a[j]<<" ";
        cout<<endl;
    }
	//code
	return 0;
}
