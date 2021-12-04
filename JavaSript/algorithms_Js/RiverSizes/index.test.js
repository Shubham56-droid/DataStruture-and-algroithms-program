import riverSizes from '.';

describe('Name of the group', () => {
  it('should return the length of each river (1s) in the map', () => {
    const matrix = [
      [1, 0, 0, 1, 0],
      [1, 0, 1, 0, 0],
      [0, 0, 1, 0, 1],
      [1, 0, 1, 0, 1],
      [1, 0, 1, 1, 0],
    ];

    expect(riverSizes(matrix)).toEqual([2, 1, 5, 2, 2]);
  });

  it('should return correctly', () => {
    expect(riverSizes([[1]])).toEqual([1]);

    expect(riverSizes([[0]])).toEqual([]);

    expect(riverSizes([[1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 0]])).toEqual([3, 2, 1]);

    expect(
      riverSizes([
        [1, 0, 0, 1],
        [1, 0, 1, 0],
        [0, 0, 1, 0],
        [1, 0, 1, 0],
      ])
    ).toEqual([2, 1, 3, 1]);

    expect(
      riverSizes([
        [1, 0, 0, 0, 0, 0, 1],
        [0, 1, 0, 0, 0, 1, 0],
        [0, 0, 1, 0, 1, 0, 0],
        [0, 0, 1, 1, 1, 0, 0],
        [0, 0, 1, 0, 1, 0, 0],
        [0, 1, 0, 0, 0, 1, 0],
        [1, 0, 0, 0, 0, 0, 1],
      ])
    ).toEqual([1, 1, 1, 1, 7, 1, 1, 1, 1]);

    expect(
      riverSizes([
        [0, 0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0],
      ])
    ).toEqual([]);
  });
});
