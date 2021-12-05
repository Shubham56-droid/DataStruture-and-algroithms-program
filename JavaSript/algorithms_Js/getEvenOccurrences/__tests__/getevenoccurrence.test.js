import getEvenOccurrence from '../getevenoccurrence';

describe('Even occurrence', () => {
  it('should return the first even occurrence of a number', () => {
    expect(getEvenOccurrence([])).toEqual(null);
    expect(getEvenOccurrence([1, 2, 3])).toEqual(null);
    expect(getEvenOccurrence([1, 2, 2, 3, 4, 5, 5, 5, 5, 6, 6, 6])).toEqual(2);
    expect(getEvenOccurrence([1, 2, 2, 2, 3, 4, 5, 5, 5, 5, 6, 6, 6])).toEqual(
      5
    );
  });
});
