import GetMaxStack from '../getMaxStack';

describe('Get the max stack', () => {
  it('return the largest item in the stack', () => {
    const getMaxStack = new GetMaxStack();

    getMaxStack.push(1);
    getMaxStack.push(5);
    getMaxStack.push(2);
    getMaxStack.push(12);
    getMaxStack.push(3);

    expect(getMaxStack.getMax()).toEqual(12);
  });
});
