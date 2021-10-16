from collections import Counter
import math

class Solution:
    def majorityElement(self, A):
        frequency = Counter(A)
        size = len(A)
        for (key, value) in frequency.items():
            if (value > math.floor(size/2)):
                return key

fun = Solution()
A = [2, 2, 1]
print(fun.majorityElement(A))



            