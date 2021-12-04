const translateRomanNumeral = (romanNumeral) => {
  const DIGIT_VALUES = {
    I: 1,
    V: 5,
    X: 10,
    L: 50,
    C: 100,
    D: 500,
    M: 1000,
  };

  let result = 0;
  const input = romanNumeral.split('');

  for (let i = 0; i < input.length; i++) {
    const currentLetter = DIGIT_VALUES[input[i]];
    const nextLetter = DIGIT_VALUES[input[i + 1]];
    if (!currentLetter) {
      return 'null';
    } else {
      if (currentLetter < nextLetter) {
        result += nextLetter - currentLetter;
        i++;
      } else {
        result += currentLetter;
      }
    }
  }

  return result;
};

export default translateRomanNumeral;
