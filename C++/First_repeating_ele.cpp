#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

const int N=1e6+2;
    int k[N];

for(int i=0;i<N;i++)
{
 k[i]=-1;
}
    int minadx=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(k[a[i]]!=-1)
        {
            minadx=min(minadx,k[a[i]]);
        }
        else{
            k[a[i]]=i;
        }
    }

    if(minadx ==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else{
        cout<< minadx + 1<<endl;
    }

    return 0;
}
