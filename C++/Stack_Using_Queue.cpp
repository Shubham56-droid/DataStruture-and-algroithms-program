#include<bits/stdc++.h>
using namespace std;

class stacck
{
    int N;
    queue<int> q1;
    queue<int> q2;

    public:
    stacck()
    {
        N=0;
    }

    void push(int val)
    {
        q2.push(val);
        N++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
                     
    }

    void pop()
    {
        q1.pop();
        N--;
    }

    int top()
    {
        return q1.front();
    }

    int size()
    {
       return N;     
    }
};

