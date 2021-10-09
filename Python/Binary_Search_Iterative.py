def binary_search_iterative(l, target):
    low = 0
    high = len(l) - 1
    while low <= high:

        mid = (low + high) // 2

        if (l[mid] == target):
            return 1
        elif (l[mid] > target):
            high = mid - 1
        else:
            low = mid + 1
    return -1


l = [10, 20, 1, 25, 45, 85, 78, 69, 100]
l.sort()

target = 100

if (binary_search_iterative(l, target)):
    print("Target found!")
else:
    print("Target not found!")
