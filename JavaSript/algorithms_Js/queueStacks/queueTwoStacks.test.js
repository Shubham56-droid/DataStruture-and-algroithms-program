import QueueTwoStacks from './queueTwoStacks';

describe('Queue with two stacks', () => {
  it('should be FIFO, first in first out', () => {
    const queue = new QueueTwoStacks();

    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);

    expect(queue.dequeue()).toEqual(2);
  });

  it('should be FIFO, first in first out', () => {
    const queue = new QueueTwoStacks();

    queue.enqueue(2);

    expect(queue.dequeue()).toEqual(2);

    queue.enqueue(3);
    queue.enqueue(4);

    queue.dequeue();

    queue.enqueue(5);

    expect(queue.dequeue()).toEqual(4);
  });
});
