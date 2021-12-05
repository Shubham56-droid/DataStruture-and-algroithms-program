const reverseArrayInPlace = (arr) => {
  for (let i = 0; i < arr.length / 2; i++) {
    const tempVar = arr[i];
    arr[i] = arr[arr.length - 1 - i];
    arr[arr.length - 1 - i] = tempVar;
  }

  return arr;
};

export default reverseArrayInPlace;
