#include<bits/stdc++.h>
using namespace std;

int main()
{
    // There are 2 methods one by using the naive approach for reversing the string and another using the inbuilt function.

    string s1 = "ReverseTheString";
    string ReversedString = "";

    for(int i=s1.length()-1; i>=0; i--)
    {
        ReversedString += s1[i];
    }

    cout<<ReversedString<<"\n";

    string s2 = "ReverseTheString";
    reverse(s2.begin(), s2.end());

    cout<<s2<<"\n";

}