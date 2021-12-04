# ⚗ Two Sum:

Find all the pair of numbers in the passed array that adds up to the passed sum.

Any number in the array can be used for multiple pairs.

```
expect(twoSum([1, 6, 4, 5, 3, 3], 7)).toEqual([[6, 1], [3, 4], [3, 4]])
```

Let's also implement it efficiently O(n) or less efficiently O(n^2)

With 1000 numbers in the passed array

    ⏱ 🚀 Call to twoSum took 0.4094ms.

    ⏱ 🚀 Call to twoSumInefficient took 7.8309ms.

With 10000 numbers in the passed array:

    ⏱ 🚀 Call to twoSum took 28.5429ms.

    ⏱ 🚀 Call to twoSumInefficient took 732.7597ms.
