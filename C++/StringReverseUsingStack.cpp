#include <iostream>
#include <stack>
#include <string>
using namespace std;
 
// Reverse a string using a stack container in C++.
void reverse(string &str)
{
    // create an empty stack
    stack<int> s;
 
    // Push each character in the string to the stack
    for (char ch: str) {
        s.push(ch);
    }
 
    // pop all characters from the stack and append them back to the input string
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = s.top();
        s.pop();
    }
}
 
int main()
{
    string str = "HacktoberFest 2021";
 
    reverse(str);
    cout << str;
 
    return 0;
}