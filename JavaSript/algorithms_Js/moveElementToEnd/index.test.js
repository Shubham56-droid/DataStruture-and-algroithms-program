import moveElementToEnd from './';

describe('moveElementToEnd', () => {
  it('should pass', () => {
    expect(moveElementToEnd([2, 1, 2, 2, 2, 3, 4, 2], 2)).toEqual([
      4,
      1,
      3,
      2,
      2,
      2,
      2,
      2,
    ]);
  });
});
