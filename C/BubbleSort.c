#include<stdio.h>

void main(){
int a[10],i,j,temp,n;

printf("\nEnter the number of elements: ");
scanf("%d",&n);

for(i=0;i<n;i++){
    printf("\nEnter element: ");
    scanf("%d",&a[i]);
}

for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        if(a[j+1]<a[j]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}

printf("\nThe sorted array is: ");
for(i=0;i<n;i++){
    printf("\t%d",a[i]);
}

}