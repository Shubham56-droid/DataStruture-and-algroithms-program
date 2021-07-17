// C++ program for implementation of Bubble sort
#include 
using namespace std;

int main() {
  int arr[] = {4, 1, 5, 3, 2};
  // Finding the size of the array
  auto n = end(arr) - begin(arr);
  // Sorting array_A in ascending order
  for(int it = 0; it < (n - 1); it++){
    int flag = 0;
    for(int i = 0; i < (n - 1); i++){
      // Comparing adjacent elements
      if(arr[i] > arr[i + 1]){
        // Since the element at i is greater,
        //swap elements at index i and i+1
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        flag = 1;
      }
    }
    // Optimization. Break the outer for loop
    // if no element is swapped in the inner for loop.
    if(flag == 0){
      break;
    }
  }
  // Printing the sorted array
  for(int i = 0; i < n; i++){
    cout<< arr[i] << " ";
  }
  return 0;
}
