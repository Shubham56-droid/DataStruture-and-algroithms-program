export const firstBadVersionNaive = (n, isBadVersionFn) => {
  for (let i = 0; i < n; i++) {
    if (isBadVersionFn(i)) return i;
  }
};

const firstBadVersionHelper = (left, right, isBadVersionFn) => {
  const middle = Math.floor((left + right) / 2);
  const isBadVersion = isBadVersionFn(middle);
  if (right - left === 1) {
    return middle + 1;
  } else if (isBadVersion) {
    return firstBadVersionHelper(left, middle, isBadVersionFn);
  } else {
    return firstBadVersionHelper(middle + 1, right, isBadVersionFn);
  }
};

const firstBadVersion = (n, isBadVersionFn) => {
  return firstBadVersionHelper(0, n, isBadVersionFn);
};

export default firstBadVersion;
