export const fizzBuzz1 = (num) => {
  return [...Array(num).keys()]
    .map((_, i) => i + 1)
    .map((i) =>
      i % 15 === 0
        ? 'FizzBuzz'
        : i % 3 === 0
        ? 'Fizz'
        : i % 5 === 0
        ? 'Buzz'
        : i
    );
};

/*

Break-down:

[...Array(100).keys()]
creates an empty array of length 100, and returns its keys, which are then used to build a new array, so we get [0 ... 99]

.map((_, i) => i + 1)
this replaces each element with its index incremented by 1, so we now have [1 ... 100]

.map(i => ...)
now we apply FizzBuzz logic, by testing all the possible combinations in the correct order, using the ternary operator

*/

export const fizzBuzz2 = (num) => {
  let fizzedBuzzedArr = [];

  for (let i = 1; i <= num; i++) {
    if (i % 3 === 0 && i % 5 === 0) {
      fizzedBuzzedArr.push('FizzBuzz');
    } else if (i % 3 === 0) {
      fizzedBuzzedArr.push('Fizz');
    } else if (i % 5 === 0) {
      fizzedBuzzedArr.push('Buzz');
    } else {
      fizzedBuzzedArr.push(i);
    }
  }

  return fizzedBuzzedArr;
};
