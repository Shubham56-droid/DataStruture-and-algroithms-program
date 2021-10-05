from queue import Queue

def Print(q):
    print(q.queue)

def reverse(queue):
    stack = []
    while not queue.empty():
        stack.append(queue.queue[0])
        queue.get()
    while len(stack) != 0:
        queue.put(stack[-1])
        stack.pop()
 
if __name__ == '__main__':
    queue = Queue()
    items = [1,3,5,7,9,11]
    for i in items:
        queue.put(i)
    reverse(queue)
    Print(queue)