#include<bits/stdc++.h>
using namespace std;

bool binSearch(vector<int>& arr, int x){
int n=arr.size();
int start=0, end=n-1, mid;
while(start<=end){
    mid=(start+end)>>1;
    if(arr[mid]==x)
    return true;
    else if(arr[mid]>x)
    end=mid-1;
    else start=mid+1;
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
    sort(arr.begin(), arr.end());
    vector<int> search={9, 70, 12};
    for(int i=0; i<search.size(); i++){
    cout<<"Element to be searched in array is: "<<search[i]<<endl;
    if(binSearch(arr, search[i]))
    cout<<"Element is present";
    else cout<<"Element is absent";
    cout<<endl;
    }

}
