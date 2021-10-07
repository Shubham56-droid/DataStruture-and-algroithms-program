#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll e = 1000000007; // 10^9+7

int partition(int *a, int s, int e)
{
    int i = s - 1;
    int j = s;
    int pivot = a[e];
    for (j = s; j < e; j++)
    {
        if (a[j] <= pivot)
        {
            i += 1;
            swap(a[i], a[j]);
        }
    }
    swap(a[e], a[i + 1]);
    return i + 1;
}

void quicksort(int *a, int s, int e)
{
    if (s >= e)
        return;
    int p = partition(a, s, e);
    quicksort(a, s, p - 1);
    quicksort(a, p + 1, e);
}

int main()
{
    puts("Enter the number of elements of the list");
    int n;
    cin >> n;
    int a[n];
    puts("Input the elements of the list");
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    quicksort(a, 0, n - 1);
    puts("The sorted list is : ");
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
