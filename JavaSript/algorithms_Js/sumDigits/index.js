const sumDigits = (n) => {
  let sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }

  return parseInt(sum, 10);
};

export default sumDigits;
