import ResponseHandler from './responseHandler';

describe('ResponseHandler', () => {
  let responseHandler;

  beforeEach(() => {
    responseHandler = new ResponseHandler();
  });

  it('should have 1 handler', () => {
    responseHandler.add('1', null);
    expect(responseHandler.handlers).toHaveLength(1);
  });

  it('should handle multiple handlers with same code', () => {
    const mockCallback = jest.fn();

    responseHandler.add(120, mockCallback);
    responseHandler.add(120, mockCallback);

    responseHandler.handle({
      status: 120,
    });

    expect(mockCallback.mock.calls.length).toBe(2);
  });

  it('should fallback to series', () => {
    const seriesCb = jest.fn();

    responseHandler.add(400, seriesCb);

    responseHandler.handle({
      status: 404,
    });

    expect(seriesCb.mock.calls.length).toBe(1);
  });
  it('should fallback to 0', () => {
    const mockCallback = jest.fn();

    responseHandler.add(0, mockCallback);
    responseHandler.add(500, null);
    responseHandler.add(301, null);
    responseHandler.add(609, null);

    responseHandler.handle({
      status: 404,
    });

    expect(mockCallback.mock.calls.length).toBe(1);
  });
});
