import getPermutations from '.';

describe('getPermutations', () => {
  it('should', () => {
    const permutations = getPermutations([1, 2, 3]);
    expect(permutations).toEqual([
      [1, 2, 3],
      [1, 3, 2],
      [2, 1, 3],
      [2, 3, 1],
      [3, 1, 2],
      [3, 2, 1],
    ]);
  });
});
