#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the length of the Array : ";
    cin>>n;
    cout<<endl;

    int a[n];
    cout<<"Enter the elements in the array : "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
        cout<<endl;
    }
    
    int search,pos,check=0;

    cout<<"Enter the Element to be searched : ";
    cin>>search;
    cout<<endl;

    for(int i=0; i<n; i++)
    {
        if(a[i]==search)
        {
            pos = i;
            check = 1;
            break;
        }
    }

    if(check==1){
        cout<<"Element '"<<search<<"' is found at position '"<<pos+1<<"'"<<endl;
    }
    else{
        cout<<"Element not found!!"<<endl;
    }

    return 0;
}