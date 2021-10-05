#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr, int n ){
    for(int i=0; i<n; i++){
        int key=arr[i], ptr=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<key){
                key=arr[j];
                ptr=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[ptr];
        arr[ptr]=temp;
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
    selectionSort(arr, n);
    cout<<"\nArray after insertion sort is:"<<endl;
    for(int i=0; i<n ;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}
