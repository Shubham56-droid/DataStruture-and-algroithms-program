class Stack {
  constructor() {
    this.items = [];
  }

  push(item) {
    this.items.push(item);
  }

  pop() {
    // if the stack is empty, return null
    // (it would also be reasonable to throw an exception)
    if (!this.items.length) {
      return null;
    }
    return this.items.pop();
  }

  peek() {
    if (!this.items.length) {
      return null;
    }
    return this.items[this.items.length - 1];
  }
}

class GetMaxStack {
  constructor() {
    this.stack = new Stack();
    this.maxesStack = new Stack();
  }

  push(item) {
    this.stack.push(item);
    if (!this.maxesStack.peek() || item >= this.maxesStack.peek()) {
      this.maxesStack.push(item);
    }
  }

  pop() {
    var item = this.stack.pop();
    if (item === this.maxesStack.peek()) {
      this.maxesStack.pop();
    }
    return item;
  }

  getMax() {
    return this.maxesStack.peek();
  }
}

export default GetMaxStack;
