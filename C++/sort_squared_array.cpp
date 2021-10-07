/* C++ program to Sort square of the numbers
of the array*/
#include <bits/stdc++.h>
using namespace std;
 
// Function to sort and square array
void sortSquares(int arr[], int n)
{
    /* First convert each array elements
     into its square */
    for (int i = 0; i < n; i++)
        arr[i] = arr[i] * arr[i];
 
    
    stable_sort(arr, arr + n);              // Sort an array using "stable_sort STL function "
}
 
int main()                                  // Driver program to test above function
{
    int arr[] = { -36, -9, -1, 2, 7, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
      cout << "Before sort " << endl;
      for (int i = 0; i < n; i++)
          cout << arr[i] << " ";
          cout<<endl;
    sortSquares(arr, n);
 
      cout << "\nAfter Sort " << endl;
      for (int i = 0; i < n; i++)
          cout << arr[i] << " ";
          cout<<endl;
    return 0;
}
