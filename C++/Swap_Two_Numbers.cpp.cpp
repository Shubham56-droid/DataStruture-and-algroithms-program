#include<bits/stdc++.h>
using namespace std;

void swap_numbers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 10, y = 5;

    // This is the function that we have created by passing the address of the variables for swapping the values in the variables.
    swap_numbers(&x, &y);

    cout<<x<<" "<<y<<"\n";

    int m = 10, n = 5;

    //This is the inbuilt function that we can use to swap two numbers by just passing the values to it through variables.
    swap(m, n);
    
    cout<<m<<" "<<n<<"\n";
    return 0;
}