# ⚗ Mean Median Mode averages:

To calculate the Mean

Add the numbers together and divide by the number of numbers.
(The sum of values divided by the number of values).

To determine the Median

Arrange the numbers in order, find the middle number.
(The middle value when the values are ranked).

To determine the Mode

Count how many times each value occurs the highest is the mode.
(The most frequently occurring value)

```
    const meanMedianMode = new MeanMedianMode([10, 3, 3, 23, 9])

    expect(meanMedianMode.getMeanMedianMode()).toEqual({ mean: 9.6, median: 9, mode: ['3'] })
```
