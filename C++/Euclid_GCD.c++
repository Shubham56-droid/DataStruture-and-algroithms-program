#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    int c = gcd(a, b);
    cout << "The greatest common divisor of " << a << " and " << b << " is " << c;

    return 0;
}