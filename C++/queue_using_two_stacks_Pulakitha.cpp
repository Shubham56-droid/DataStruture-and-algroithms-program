#include <bits/stdc++.h>
using namespace std;
struct Queue {
	stack<int> stack1, stack2;
	void push(int a)
	{
		
		while (!stack1.empty()) {
            int top_element = stack1.top();
            stack1.pop();
			stack2.push(top_element);
		}

		
		stack1.push(a);

		
		while (!stack2.empty()) {
            int top_element = stack2.top();
            stack2.pop();
			stack1.push(top_element);
		}
	}

	int pop()
	{
		if (stack1.empty()) {
			cout << "Queue is Empty";
			exit(0);
		}
		int a = stack1.top();
		stack1.pop();
		return a;
	}
};

int main()
{
	Queue queue;
	queue.push(1);
	queue.push(2);
	cout << queue.pop() << endl;
	queue.push(3);
    queue.push(5);
	cout << queue.pop() << endl;
	cout << queue.pop() << endl;

	return 0;
}
