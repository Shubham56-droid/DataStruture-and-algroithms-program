class QueueTwoStacks {
  constructor() {
    this.inStack = [];
    this.outStack = [];
  }

  enqueue(item) {
    this.inStack.push(item);
  }

  dequeue() {
    if (this.outStack.length === 0) {
      // Move items from inStack to outStack, reversing order
      while (this.inStack.length > 0) {
        const newestInStackItem = this.inStack.pop();
        this.outStack.push(newestInStackItem);
      }

      // If outStack is still empty, raise an error
      if (this.outStack.length === 0) {
        return undefined;
      }
    }
    return this.outStack.pop();
  }
}

export default QueueTwoStacks;
