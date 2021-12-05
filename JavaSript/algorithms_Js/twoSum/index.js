export const twoSum = (arr, sum) => {
  let pairs = [];
  let hashTable = [];

  for (let i = 0; i < arr.length; i++) {
    const currNum = arr[i];
    const counterPart = sum - currNum;

    if (hashTable.indexOf(counterPart) !== -1) {
      pairs.push([currNum, counterPart]);
    }

    hashTable.push(currNum);
  }

  return pairs;
};

export const twoSumInefficient = (arr, sum) => {
  let pairs = [];

  for (let i = 0; i < arr.length; i++) {
    const currNum = arr[i];
    const counterPart = sum - currNum;

    for (let z = i; z < arr.length; z++) {
      const scurrNum = arr[z];

      if (scurrNum === counterPart) {
        pairs.push([counterPart, currNum]);
      }
    }
  }

  return pairs;
};
