import reverseArrayInPlace from '../';

describe('reverseArrayInPlace', () => {
  it('should behave...', () => {
    const inputArr = [1, 2, 3, 4, 5, 6, 7, 8];
    const outputArr = [8, 7, 6, 5, 4, 3, 2, 1];

    expect(reverseArrayInPlace(inputArr)).toEqual(outputArr);
  });
});
