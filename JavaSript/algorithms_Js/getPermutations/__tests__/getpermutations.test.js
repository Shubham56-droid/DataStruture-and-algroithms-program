import getPermutations from '../getpermutations';

describe('Get all permutations of a strinf', () => {
  it('should return all the permutations of a string', () => {
    const expectedPermutations = ['a'];
    expect(getPermutations('a')).toEqual(expectedPermutations);
  });
  it('should return all the permutations of a string', () => {
    const expectedPermutations = ['abc', 'acb', 'bac', 'bca', 'cab', 'cba'];
    expect(getPermutations('abc')).toEqual(expectedPermutations);
  });
  it('should return all the permutations of a string', () => {
    const expectedPermutations = ['123', '132', '213', '231', '312', '321'];
    expect(getPermutations('123')).toEqual(expectedPermutations);
  });
});
