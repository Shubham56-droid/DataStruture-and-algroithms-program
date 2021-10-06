#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
    int i=0;
    while(i<n){
    swap(arr[i],arr[n-1]);
        
        i++;
        n--;
    }

    }


int main(){
    
    int arr[] = {1,2,3,4,5,6,7};
    
   
    reverse(arr,7); //MADE YOUR CODE EASIER , TWO POINTER TECHNIQUE.

    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}
