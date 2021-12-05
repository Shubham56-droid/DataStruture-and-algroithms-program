import power from './power';

describe('power', () => {
  it('should have 1 handler', () => {
    const p = power(2, 4);
    expect(p).toEqual(16);
  });
});
