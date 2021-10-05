#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr, int n ){
    for(int i=1; i<n; i++){
        int j=i-1, temp=arr[i]; 
        while(j>=0 and temp<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main()
{
    
    vector<int> arr={12,14, 17, 9, 78, 6};
    int n=arr.size();
    cout<<"Array before insertion sort is:"<<endl;
    for(int i=0; i<n ;i++){
        cout<<arr[i]<<" ";
    }
    insertionSort(arr, n);
    cout<<"\nArray after insertion sort is:"<<endl;
    for(int i=0; i<n ;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}
