import MeanMedianMode from '../';

describe('meanMedianMode', () => {
  it('should behave...', () => {
    const meanMedianMode = new MeanMedianMode([9, 10, 23, 10, 23, 9]);

    expect(meanMedianMode.getMeanMedianMode()).toEqual({
      mean: 14,
      median: 10,
      mode: [],
    });
  });

  it('should behave even now...', () => {
    const meanMedianMode = new MeanMedianMode([2, 10, 23, 3, 23, 9]);

    expect(meanMedianMode.getMeanMedianMode()).toEqual({
      mean: 11.666666666666666,
      median: 9.5,
      mode: ['23'],
    });
  });

  it('should behave even now...and now..', () => {
    const meanMedianMode = new MeanMedianMode([10, 3, 3, 23, 9]);

    expect(meanMedianMode.getMeanMedianMode()).toEqual({
      mean: 9.6,
      median: 9,
      mode: ['3'],
    });
  });

  it('should behave even now...and now..hey! Put some effort with test titles!', () => {
    const meanMedianMode = new MeanMedianMode([10, 3, 3, 23, 9, 23, 9]);

    expect(meanMedianMode.getMeanMedianMode()).toEqual({
      mean: 11.428571428571429,
      median: 9,
      mode: ['3', '9', '23'],
    });
  });
});
