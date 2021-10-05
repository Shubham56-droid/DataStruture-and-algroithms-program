#include<stdio.h>

int main(){
    
    int arr[] = {1,2,3,4,5,6,7};
    int arr2[7];
    int size = sizeof(arr)/4;
    for(int i=0;i<size;i++){
        arr2[size-1-i] = arr[i];
    }
    for(int i=0;i<size;i++){
        printf("%d",arr2[i]);
    }
}