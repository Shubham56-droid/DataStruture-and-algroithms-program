import WordDictionary from '.';

describe('WordDictionary', () => {
  let wordDictionary = '';

  beforeEach(() => {
    wordDictionary = new WordDictionary();
    wordDictionary.addWord('bad');
    wordDictionary.addWord('dad');
    wordDictionary.addWord('mad');
  });

  it('should not find "pad"', () => {
    expect(wordDictionary.search('pad')).toBeFalsy();
  });

  it('should find "bad"', () => {
    expect(wordDictionary.search('bad')).toBeTruthy();
  });

  it('should find ".ad"', () => {
    expect(wordDictionary.search('.ad')).toBeTruthy();
  });

  it('should find "b.."', () => {
    expect(wordDictionary.search('b..')).toBeTruthy();
  });
});
