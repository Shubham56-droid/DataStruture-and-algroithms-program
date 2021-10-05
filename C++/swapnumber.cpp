#include <bits/stdc++.h>
using namespace std;

void swap(int *ab, int *cd)
{
    int temp = *ab;
    *ab = *cd;
    *cd = temp;
}

int main()
{
    int a = 23;
    int b = 42;

    cout<<"Original: \n";
    cout<<"a: "<<a<<"\n";
    cout<<"b: "<<b<<"\n";
    swap(&a, &b);

    cout<<"Swapped: \n";
    cout<<"a: "<<a<<"\n";
    cout<<"b: "<<b<<"\n";
    return 0;
}
