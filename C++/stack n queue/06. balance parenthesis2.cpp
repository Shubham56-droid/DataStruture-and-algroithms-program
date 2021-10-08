#include <iostream>
#include <stack>
using namespace std;
bool balParenthesis(string exp)
{
	stack<char> stack;

	for (char ch: exp)
	{
		if (ch == '(' || ch == '{' || ch == '[') {
			stack.push(ch);
		}

		if (ch == ')' || ch == '}' || ch == ']')
		{
			if (stack.empty()) {
				return false;
			}

			char top = stack.top();
			stack.pop();
			if ((top == '(' && ch != ')') ||
				(top == '{' && ch != '}') ||
				(top == '[' && ch != ']'))
			{
				return false;
			}
		}
	}
	return stack.empty();
}

int main()
{
	string exp = "()()";

	if (balParenthesis(exp))
		cout << "The expression is balanced";
	else
		cout << "The expression is not balanced";

	return 0;
}
