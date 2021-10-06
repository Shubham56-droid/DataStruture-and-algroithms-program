#include <iostream>
using namespace std;

int binary_search(int A[], int beg, int end, int ele)
{
    if (end >= beg)
    {
        int mid = (beg + end - 1) / 2;

        if (A[mid] == ele)
            return mid;
        else if (A[mid] > ele)
            return binary_search(A, beg, mid, ele);
        else
            return binary_search(A, mid + 1, end, ele);
    }
    return -1;
}
int main()
{
    int n, ele, index;
    cin >> n;
    int *A = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cin>>ele;
    index = binary_search(A, 0, n-1, ele);
    if(index!=-1)
        cout<<"Element found at index "<<index;
    else 
        cout<<"Element not found!";
}