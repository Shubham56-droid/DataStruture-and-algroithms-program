#include<stdio.h>
void main(){
int a[10],i,j,key,n;
printf("\nEnter the number of elements: ");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("\nEnter element: ");
    scanf("%d",&a[i]);
}
for(i=1;i<n;i++){
    key=a[i];
    j=i-1;
    while(j>=0 && a[j]>key){
        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=key;
}
printf("\nThe sorted array is: ");
for(i=0;i<n;i++){
    printf("\t%d",a[i]);
}
}


