class WordDictionary {
  constructor() {
    this.data = [];
  }
  addWord(word) {
    const words = (this.data[word.length] =
      this.data[word.length] || new Set());
    words.add(word);
  }
  search(input) {
    const words = this.data[input.length];
    if (words === undefined) {
      return false;
    }

    const regex = new RegExp(input);
    return !![...words].some((nextWord) => regex.test(nextWord));
  }
}

export default WordDictionary;
