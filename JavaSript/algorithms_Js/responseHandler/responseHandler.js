class ResponseHandler {
  constructor(handlers = []) {
    this.handlers = handlers;
  }

  add(code, handler) {
    this.handlers.push({
      code,
      handler,
    });
  }

  handle(response) {
    const status = response.status;

    let handlers = this.handlers.filter((handle) => handle.code === status);

    if (handlers.length === 0) {
      handlers = this.handlers.filter(
        (handle) => handle.code === Math.floor(status / 100) * 100
      );
    }

    if (handlers.length === 0) {
      handlers = this.handlers.filter((handle) => handle.code === 0);
    }

    handlers.forEach((handler) => {
      handler.handler(response);
    });
  }
}

export default ResponseHandler;
