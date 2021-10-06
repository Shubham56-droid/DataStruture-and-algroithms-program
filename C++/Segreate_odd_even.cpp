#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    vector<int> odd,even;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x&1)
        odd.push_back(x);
        else
        even.push_back(x);
    }
    cout<<"Odd numbers are\n";
    for(int i=0;i<odd.size();i++)
    cout<<odd[i]<<' ';
    cout<<"\nEven numbers are\n";
    for(int i=0;i<even.size();i++)
    cout<<even[i]<<' ';
}
