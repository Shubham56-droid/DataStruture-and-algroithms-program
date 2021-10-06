#include<stdio.h>

int main(){

    int Arr[] = {100,123,12,32,3,235,547,296,112,231,547};
    int size = sizeof(Arr)/4;
    int odd[size],even[size];
    int o=0,e=0;

    for(int i=0;i<size;i++){

        if(Arr[i] % 2 ==0){
            even[e] = Arr[i];
            e++;
        }
        else{
            odd[o] = Arr[i];
            o++;
        }
    }
    printf("Odd numbers were : ");
    for(int i=0;i<o;i++){
        printf("%d ",odd[i]);
    }
    printf("\nEven numbers were : ");
    for(int i=0;i<e;i++){
        printf("%d ",even[i]);
    }

}