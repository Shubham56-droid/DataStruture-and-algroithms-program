def isEven(x):
    return x % 2


n = int(input())
arr = [int(x) for x in input().split()]
i = 0
j = n - 1
while(i < j):
    while(isEven(arr[i]) and i < j):
        i += 1
    while(not isEven(arr[j]) and i < j):
        j -= 1
    if(i < j):
        arr[i], arr[j] = arr[j], arr[i]
        i += 1
        j -= 1

print(*arr)
