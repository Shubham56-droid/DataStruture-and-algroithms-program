#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int m=0;
	    for(int i=1; i<=k; i++)
	    {
	    int div;
	    div=n/i;
	    if(m < (n-(div*i)))
	    {
	        m = n-(div*i);
	    }
	
	    
    }
    cout << m << endl;// your code goes here
	}
	return 0;
}
