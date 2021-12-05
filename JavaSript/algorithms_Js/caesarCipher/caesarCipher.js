export const caesarCipher = (str, num) => {
  const asciiUpper = [65, 90];
  const asciiLower = [97, 122];

  const outStr = str
    .split('')
    .map((char) => {
      const currentIndex = char.charCodeAt(0);
      const isInUpperRange = (index) =>
        index >= asciiUpper[0] && index <= asciiUpper[1];
      const isInLowerRange = (index) =>
        index >= asciiLower[0] && index <= asciiLower[1];

      let newIndex = currentIndex + num;

      const isOverMax = (index, maxIndex) => index > maxIndex;
      const isBelowMin = (index, minIndex) => index < minIndex;

      if (isInUpperRange(currentIndex)) {
        if (isOverMax(newIndex, asciiUpper[1])) {
          newIndex = asciiUpper[0] + (newIndex - asciiUpper[1] - 1);
        } else if (isBelowMin(newIndex, asciiUpper[0])) {
          newIndex = asciiUpper[1] - (asciiUpper[0] - newIndex - 1);
        }

        return String.fromCharCode(newIndex);
      } else if (isInLowerRange(currentIndex)) {
        if (isOverMax(newIndex, asciiLower[1])) {
          newIndex = asciiLower[0] + (newIndex - asciiLower[1] - 1);
        } else if (isBelowMin(newIndex, asciiLower[0])) {
          newIndex = asciiLower[1] - (asciiLower[0] - newIndex - 1);
        }

        return String.fromCharCode(newIndex);
      } else {
        return char;
      }
    })
    .join('');

  return outStr;
};

export const caesarCipher2 = (str, num) => {
  num = num % 26;
  const lowerCaseString = str.toLowerCase();
  const alphabet = 'abcdefghijklmnopqrstuvwxyz'.split('');
  let newString = '';

  for (let i = 0; i < lowerCaseString.length; i++) {
    const currentLetter = lowerCaseString[i];
    if (currentLetter === ' ') {
      newString += currentLetter;
      continue;
    }
    const currentIndex = alphabet.indexOf(currentLetter);
    let newIndex = currentIndex + num;
    if (newIndex > 25) newIndex = newIndex - 26;
    if (newIndex < 0) newIndex = 26 + newIndex;
    if (str[i] === str[i].toUpperCase()) {
      newString += alphabet[newIndex].toUpperCase();
    } else newString += alphabet[newIndex];
  }

  return newString;
};

export const caesarCipher3 = (str, num) => {
  // Wrap the amount
  if (num < 0) return caesarCipher3(str, num + 26);

  // Make an output variable
  let output = '';

  // Go through each character
  for (let i = 0; i < str.length; i++) {
    // Get the character we'll be appending
    let c = str[i];

    // If it's a letter...
    if (c.match(/[a-z]/i)) {
      // Get its code
      const code = str.charCodeAt(i);

      if (code >= 65 && code <= 90)
        // Uppercase letters
        c = String.fromCharCode(((code - 65 + num) % 26) + 65);
      else if (code >= 97 && code <= 122)
        // Lowercase letters
        c = String.fromCharCode(((code - 97 + num) % 26) + 97);
    }

    // Append
    output += c;
  }

  // All done!
  return output;
};

export const caesarCipher4 = (str, num) => {
  return str
    .replace(/[A-Z]/g, (c) =>
      String.fromCharCode(((c.charCodeAt(0) - 65 + num) % 26) + 65)
    )
    .replace(/[a-z]/g, (c) =>
      String.fromCharCode(((c.charCodeAt(0) - 97 + num) % 26) + 97)
    );
};
