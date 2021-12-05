class meanMedianMode {
  constructor(arr) {
    this.arr = arr;
  }

  getMean(arr) {
    return arr.reduce((acc, num) => acc + num) / arr.length;
  }

  getMedian(arr) {
    arr.sort((a, b) => a - b);

    let median;

    const isOddLength = arr.length % 2 !== 0;

    if (isOddLength) {
      median = arr[Math.floor(arr.length / 2)];
    } else {
      const mid1 = arr[arr.length / 2 - 1];
      const mid2 = arr[arr.length / 2];
      median = (mid1 + mid2) / 2;
    }

    return median;
  }

  getMode(arr) {
    const modeObj = arr.reduce((obj, num) => {
      if (!obj[num]) obj[num] = 0;
      obj[num]++;

      return obj;
    }, {});

    let maxFrequency = 0;

    return Object.keys(modeObj)
      .reduce((acc, num) => {
        if (modeObj[num] > maxFrequency) {
          acc = [num];
          maxFrequency = modeObj[num];
        } else if (modeObj[num] === maxFrequency) {
          acc.push(num);
        }
        return acc;
      }, [])
      .filter((num, i, arr) => arr.length !== Object.keys(modeObj).length);
  }

  getMeanMedianMode() {
    return {
      mean: this.getMean(this.arr),
      median: this.getMedian(this.arr),
      mode: this.getMode(this.arr),
    };
  }
}

export default meanMedianMode;
