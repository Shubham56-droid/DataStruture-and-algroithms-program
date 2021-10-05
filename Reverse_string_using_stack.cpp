#include <bits/stdc++.h>
using namespace std;

int main() {
    string s="Hello everyone";
    stack<char>st;
    for(int i=0;i<s.length();i++)
    {
        st.push(s[i]);
    }
    int i=0;
    while(!st.empty())
    {
        s[i]=st.top();
        st.pop();
        i++;
    }
    cout<<"Reversed string: "<<s<<endl;
}
