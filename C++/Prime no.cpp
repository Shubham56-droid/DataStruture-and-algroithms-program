#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter no: ";
	cin>>n;
	bool f=false;
	for(int i=2;i<n;i++){
		if(n%i==0){
			f=true;
		}
	}
if(f){
	cout<<"Not Prime\n";
	}
else{
		cout<<"Prime\n";
	}
	return 0;
}
