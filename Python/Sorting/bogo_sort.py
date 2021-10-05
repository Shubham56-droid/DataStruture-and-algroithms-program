"""
Bogo Sort

(also known as permutation sort, stupid sort, or slowsort) is a highly inefficient sorting algorithm based on the generate and test paradigm. 
The function successively generates permutations of its input until it finds one that is sorted. 
It is not useful for sorting, but may be used for educational purposes, to contrast it with more efficient algorithms.

https://en.wikipedia.org/wiki/Bogosort

        Best Case Complexity: O(n)
        Worst Case Complexity: O(∞)
        Average Case Complexity: O(n(n-1)!)

"""

import random

def bogo_sort(arr, simulation=False):
        
    iteration = 0
    if simulation:
        print("iteration",iteration,":",*arr)
    
    def is_sorted(arr):
        #check the array is inorder
        i = 0
        arr_len = len(arr)
        while i+1 < arr_len:
            if arr[i] > arr[i+1]:
                return False
            i += 1
            

        return True
    while not is_sorted(arr):
        random.shuffle(arr)
        
        if simulation:
            iteration = iteration + 1
            print("iteration",iteration,":",*arr)
            
    return arr

def main():
    array = [1,5,8,0,150,44,4,3,6] #static inputs
    result = bogo_sort(array)
    print(result)
    
if __name__=="__main__":
    main()