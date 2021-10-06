#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
   
    
    while(q--){
   int c=0;     
        int m,n;
        cin>>m>>n;
        for(int i=m;i<=n;i++)
        {
            if(ceil(sqrt(i))==floor(sqrt(i)))
            c++;
        }
        
        cout<<c<<endl;
    }
	return 0;
}