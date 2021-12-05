import translateRomanNumerals from './translateromannumerals';

describe('Translate Roman numbers to numerals', () => {
  it('should translate a roman number', () => {
    expect(translateRomanNumerals('XI')).toEqual(11);
    expect(translateRomanNumerals('IX')).toEqual(9);
    expect(translateRomanNumerals('XXX')).toEqual(30);
  });
});
