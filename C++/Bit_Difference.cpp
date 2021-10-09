#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    long long set(int pattern, long long int arr[], int n)
{
   /// pair<long long,long long>m;
   // m.first=0;
   // m.second=0;
    long long count=0;
    for(int i=0;i<n;i++)
    {
        if((pattern & arr[i])==pattern)
        count++;
        //m.second++;
        
       
    }
    
    return count;
}

    int countBits(int n, long long int arr[])
    {
        long long count=0;
	 
	  long long res;
	    
	  for(int bit=31;bit>=0;bit--)
	  {
	      res=set(1<<bit,arr,n);
	      
	      count=count+res*(n-res)*2;
	  }
	  int m= count%1000000007;
	  return m;
       
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        long long int A[N];
        for(int i = 0;i < N; i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.countBits(N, A)<<"\n";
    }
    return 0;
}  
