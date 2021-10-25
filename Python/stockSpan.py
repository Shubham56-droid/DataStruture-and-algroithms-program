def stockSpan(price, n, sol):
    sol[0] = 1
    for i in range(1, n):
        sol[i] = 1
        j = i - 1
        while (j >= 0) and (price[i] >= price[j]):
            sol[i] += 1
            j -= 1


def printArray(arr, n):
    for i in range(n):
        print(arr[i], end=" ")
    print("")


price = [10, 4, 5, 90, 120, 80, 85]


def main(price):
    n = len(price)
    S = [None] * n
    stockSpan(price, n, S)
    printArray(S, n)


main(price)
