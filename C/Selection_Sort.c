#include<stdio.h>

void print(int a[],int n){
printf("\nThe sorted array is: ");
for(int i=0;i<n;i++){
    printf("\t%d",a[i]);
}
}

void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}

void selectionSort(int a[],int n){
int i,j,min;
for(i=0;i<n-1;i++){
    min=i;
    for(j=i+1;j<n;j++){
        if(a[j]<a[min]){
            min=j;
        }
        swap(&a[i],&a[min]);
    }
}
}

void main(){
int a[10],i,j,key,n;
printf("\nEnter the number of elements: ");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("\nEnter element: ");
    scanf("%d",&a[i]);
}
selectionSort(a,n);
print(a,n);

}
