import {displayPerfTime} from '../../utils/perf-utils';

import firstBadVersion, {firstBadVersionNaive} from '.';

describe('firstBadVersion', () => {
  const isBadVersionMockFn = jest
    .fn()
    .mockImplementation((v) => (v > 167 ? true : false));

  beforeEach(() => {
    isBadVersionMockFn.mockClear();
  });

  it('find the first bad version naively', () => {
    expect(firstBadVersionNaive(999, isBadVersionMockFn)).toEqual(168);
    expect(isBadVersionMockFn).toHaveBeenCalledTimes(169);
  });

  it('find the first bad version', () => {
    expect(firstBadVersion(999, isBadVersionMockFn)).toEqual(168);
    expect(isBadVersionMockFn).toHaveBeenCalledTimes(10);
  });

  describe('Performance', () => {
    it('will display perftime', () => {
      displayPerfTime('firstBadVersion(999)', () => {
        firstBadVersion(999, isBadVersionMockFn);
      });
    });

    it('will display perftime with another n', () => {
      displayPerfTime('firstBadVersion(100000000)', () => {
        firstBadVersion(100000000, isBadVersionMockFn);
      });
    });
  });
});
