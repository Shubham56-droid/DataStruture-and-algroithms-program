#include<bits/stdc++.h>
using namespace std;

bool ternSearch(vector<int>& arr, int x){
int n=arr.size();
int start=0, end=n-1, mid1,mid2;
while(start<=end){
    mid1=start+(end-start)/3;
    mid2=end-(end-start)/3;
    if(arr[mid1]==x or arr[mid2]==x)
    return true;
    else if(arr[mid1]>x)
    end=mid1-1;
    else if(arr[mid2]<x)
    start=mid2+1;
    else{
        start=mid1+1;
        end=mid2-1;
    }
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
    vector<int> search={9, 70, 12, 78};
    for(int i=0; i<search.size(); i++){
    cout<<"Element to be searched in array is: "<<search[i]<<endl;
    if(ternSearch(arr, search[i]))
    cout<<"Element is present";
    else cout<<"Element is absent";
    cout<<endl;
    }

}
