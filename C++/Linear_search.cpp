#include<bits/stdc++.h>
using namespace std;

bool linSearch(vector<int>& arr, int x){
int n=arr.size();
for(int i=0; i<n; i++){
    if(arr[i]==x)
    return true;
}
return false;
}
int main()
{
    
    vector<int> arr={12,14, 17, 9, 78, 6};
    int n=arr.size();
    cout<<"Original Array is:"<<endl;
    for(int i=0; i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr.begin(), arr.end());
    vector<int> search={9, 70, 12};
    for(int i=0; i<search.size(); i++){
    cout<<"Element to be searched in array is: "<<search[i]<<endl;
    if(linSearch(arr, search[i]))
    cout<<"Element is present";
    else cout<<"Element is absent";
    cout<<endl;
    }

}
