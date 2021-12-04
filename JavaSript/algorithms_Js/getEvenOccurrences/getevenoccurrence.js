const getEvenOccurrence = (array) => {
  let storage = {};

  array.forEach((value) => {
    storage[value] = storage[value] + 1 || 1;
  });

  for (let i = 0; i < array.length; i++) {
    const current = array[i];

    if (storage[current] % 2 === 0) {
      return current;
    }
  }

  return null;
};

export default getEvenOccurrence;
