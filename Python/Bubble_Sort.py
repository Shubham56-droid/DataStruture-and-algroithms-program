def bubbleSort(a):
    n = len(a)

    for i in range(n):
        for j in range(n - i - 1):
            if a[j] > a[j+1]:
                a[j], a[j+1] = a[j+1], a[j]


a = [64, 34, 25, 12, 22, 11, 90]
bubbleSort(a)

print("Sorted array : ")
for i in a:
    print(i)
