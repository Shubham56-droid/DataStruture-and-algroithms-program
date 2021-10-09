#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(vector<int> v)
{
    int count = 0;
    int candidate = 0;
    for (int num : v)
    {
        if (count == 0)
        {
            candidate = num;
        }
        if (num == candidate)
            count++;
        else
            count--;
    }
    return candidate;
}

int main()
{
    vector<int> v = {1, 8, 7, 4, 1, 2, 2, 2, 2, 2, 2};

    cout << "The majority element is: " << findMajorityElement(v);
    return 0;
}