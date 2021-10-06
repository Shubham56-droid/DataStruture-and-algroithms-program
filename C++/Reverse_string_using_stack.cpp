#include<bits/stdc++.h>
using namespace std;

string reverse(string str){
	stack<char> stack;				//Using stack from STL Libraries
	for(int i=0;i<str.length();i++)
		stack.push(str[i]);
	int j=0;
	while(!stack.empty()){
		str[j]=stack.top();
		stack.pop();
		j++;
	}
	return str;
}

int main(){

	string str="Hello World";
	cout<<"String before Reversing:"<<str<<endl;

	str=reverse(str);

	cout<<"String before Reversing:"<<str<<endl;	


}
