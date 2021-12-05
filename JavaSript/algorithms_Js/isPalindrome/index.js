export const isPalindrome = (string) => {
  const validChars = 'abcdefghijklmnopqrstuvwxyz';

  const stringArr = string
    .toLowerCase()
    .split('')
    .filter((char) => validChars.indexOf(char) !== -1);

  return stringArr.join('') === stringArr.reverse().join('');
};
