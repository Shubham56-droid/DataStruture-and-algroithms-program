def binary_search_recursive(l, target):
    mid = len(l) // 2

    if (l[mid] == target):
        return 1
    elif (l[mid] > target):
        return (binary_search_recursive(l[: mid], target))
    elif (l[mid] < target):
        return (binary_search_recursive(l[mid + 1:], target))
    else:
        return -1


l = [10, 20, 1, 25, 45, 85, 78, 69, 100]
l.sort()

target = 100

if (binary_search_recursive(l, target)):
    print("Target found!")
else:
    print("Target not found!")
