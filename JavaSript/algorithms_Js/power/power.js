const power = (a, b) => {
  if (b < 0) {
    return 0;
  } else if (b === 0) {
    return 1;
  } else {
    const res = a * power(a, b - 1);

    return res;
  }
};

export default power;
