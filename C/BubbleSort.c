#include<stdio.h>

void main(){
int a[100],i,j,temp,n;

printf("\nEnter the number of elements: ");
scanf("%d",&n);

for(i=0;i<n;i++){
    printf("\nEnter element: ");
    scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}

printf("\nThe sorted array is: ");
for(i=0;i<n;i++)
{
    printf("\t%d",a[i]);
}

}
