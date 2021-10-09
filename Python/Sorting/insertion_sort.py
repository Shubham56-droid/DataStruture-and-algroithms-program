def insertionSort(a):
    n = len(a)

    for i in range(1 , n):
        current = a[i]
        j = i-1

        while j > -1 and current < a[j]:
            a[j + 1] = a[j]
            j = j - 1

        a[j + 1] = current


a = [64, 34, 25, 12, 22, 11, 90]
insertionSort(a)

print("Sorted array : ")
for i in a:
    print(i)
