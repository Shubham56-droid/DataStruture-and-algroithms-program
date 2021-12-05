function moveElementToEnd(array, toMove) {
  let i = 0;
  let j = array.length - 1;

  while (i < j) {
    while (i < j && array[j] === toMove) {
      j -= 1;
    }

    if (array[i] === toMove) {
      const tempj = array[j];
      array[j] = array[i];
      array[i] = tempj;
    }

    i += 1;
  }

  return array;
}

export default moveElementToEnd;
