import {displayPerfTime} from '../../utils/perf-utils';

import {twoSum, twoSumInefficient} from '.';

describe('twoSum', () => {
  it('should return an array of pairs', () => {
    expect(twoSum([25, 1, 6, 4, 5, 3, 3, 79], 7)).toEqual([
      [6, 1],
      [3, 4],
      [3, 4],
    ]);
  });

  it('twoSum', () => {
    expect(twoSum([4, 5, 7, 8, 9, 10, 11, 14, 16], 24)).toEqual([
      [14, 10],
      [16, 8],
    ]);
  });
});

describe('twoSum inefficient On^2', () => {
  it('should return an array of pairs i', () => {
    expect(twoSumInefficient([25, 1, 6, 4, 5, 3, 3, 79], 7)).toEqual([
      [6, 1],
      [3, 4],
      [3, 4],
    ]);
  });

  it('twoSum i', () => {
    expect(twoSumInefficient([4, 5, 7, 8, 9, 10, 11, 14, 16], 24)).toEqual([
      [16, 8],
      [14, 10],
    ]);
  });
});

describe('Performance', () => {
  const bigArray = [...new Array(1000)].map(() =>
    Math.floor(Math.random() * 10 + 1)
  );

  it('will display perftime', () => {
    displayPerfTime('twoSum', () => {
      twoSum(bigArray, 7);
    });
    displayPerfTime('twoSumInefficient', () => {
      twoSumInefficient(bigArray, 7);
    });
  });
});
