import sys
A = [27,39,65,5,29,31]
print("Array Before Sorting:")
for i in range(len(A)):
    print("%d" %A[i], end =" ")
print();
for i in range(len(A)):
   
    min_idx = i
    for j in range(i+1, len(A)):
        if A[min_idx] > A[j]:
            min_idx = j
                
    A[i], A[min_idx] = A[min_idx], A[i]
 
print("Array after Sorting:")
for i in range(len(A)):
    print("%d" %A[i], end =" ")
