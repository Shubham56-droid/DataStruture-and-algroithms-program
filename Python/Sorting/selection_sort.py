"""
Selection Sort

https://en.wikipedia.org/wiki/Selection_sort

Worst-case performance: O(N^2)

If you call selection_sort(arr,True), you can see the process of the sort

Default is simulation = False

"""

def selection_sort(arr, simulation=False):

    iteration = 0
    if simulation:
        print("iteration",iteration,":",*arr)
        
    for i in range(len(arr)):
        minimum = i
        
        for j in range(i + 1, len(arr)):
            # "Select" the correct value
            if arr[j] < arr[minimum]:
                minimum = j

        arr[minimum], arr[i] = arr[i], arr[minimum]
        
        if simulation:
                iteration = iteration + 1
                print("iteration",iteration,":",*arr)
            
    return arr

def main():
    array = [1,5,8,5,150,44,4,3,6] #static inputs
    result = selection_sort(array)
    print(result)
    
if __name__=="__main__":
    main()
