#include <bits/stdc++.h>

using namespace std;
 
void reverse(string &str){
  stack<int> s;

  for (char ch: str) {
      s.push(ch);
  }

  for (int i = 0; i < str.length(); i++)
  {
      str[i] = s.top();
      s.pop();
  }
}
 
int main(){
  string str;
  cin >> str;

  reverse(str);
  cout << str;

  return 0;
}


