const reverseWords = (string) => {
  return string
    .split(' ')
    .map((word) => {
      let reversedWord = '';
      for (let i = word.length - 1; i >= 0; i--) {
        reversedWord += word[i];
      }
      return reversedWord;
    })
    .join(' ');
};

export default reverseWords;
