/*
 ---------------------------------------------  Write a C program to implement the queue using array -----------------------------------------
*/
#include<stdio.h>
#include<stdlib.h>
struct queue
{
  int size;
  int f;
  int r;
  int *arr;
};

int isFull(struct queue*q)
{
  if(q->r == q->size-1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int isEmpty(struct queue*q)
{
  if(q->r == q->f)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}


void enqueue(struct queue*q,int val)
{
  if(isFull(q))
  {
    printf("Queue Overflow\n");
  }
  else
  {
    q->r = q->r + 1;
    q->arr[q->r] = val;
  }
}

void dequeue(struct queue*q)
{
  int a = -1;
  if(isEmpty(q))
  {
    printf("Queue Underflow\n");
  }
  else
  {
    
    q->f = q->f + 1;
    int a = q->arr[q->f];

    if(a== -1)
    {
       printf("No element to remove\n");
    }
    else
    {
      printf("element %d is removed from queue\n",a);
    } 
  }
}

void queueTraversal(struct queue*q)
{
  for (int i = q->f + 1; i < q->r; i++)
  {
     printf("element %d is %d\n",i+1,q->arr[i]);
  }
}

int main()
{
  struct queue q;
  q.size = 100;
  q.f = q.r = -1;
  q.arr = (int*)malloc(q.size* sizeof(int));
  enqueue(&q,34);
  enqueue(&q,45);
  enqueue(&q,78);
  enqueue(&q,98);
  enqueue(&q,22);
  enqueue(&q,56);
  enqueue(&q,34);
  enqueue(&q,77);
  enqueue(&q,78);
  enqueue(&q,98);
  enqueue(&q,22);
  enqueue(&q,33);
  enqueue(&q,34);
  enqueue(&q,45);
  enqueue(&q,11);
  enqueue(&q,29);
  enqueue(&q,05);
  enqueue(&q,99);

  printf("the elements after enqueue is: \n");
  queueTraversal(&q);

  dequeue(&q);
  dequeue(&q);
  dequeue(&q);
  dequeue(&q);

  printf("the elements after dequeue is: \n");
  queueTraversal(&q);



  return 0;
}


/*--------------------------------------------------------------------------------------------------------------------------------------------------------

-----------------------------   OUTPUT OF THE ABOVE CODE ------------------------------------

PS D:\DSA> gcc queueusingArray.c
PS D:\DSA> .\a.exe
the elements after enqueue is: 
element 1 is 34
element 2 is 45
element 3 is 78
element 4 is 98
element 5 is 22
element 6 is 56
element 7 is 34
element 8 is 77
element 9 is 78
element 10 is 98
element 11 is 22
element 12 is 33
element 13 is 34
element 14 is 45
element 15 is 11
element 16 is 29
element 17 is 5
element 34 is removed from queue
element 45 is removed from queue
element 78 is removed from queue
element 98 is removed from queue
the elements after dequeue is:
element 5 is 22
element 6 is 56
element 7 is 34
element 8 is 77
element 9 is 78
element 10 is 98
element 11 is 22
element 12 is 33
element 13 is 34
element 14 is 45
element 15 is 11
element 16 is 29
element 17 is 5


--------------------------------------------------------------------------------------------------------------------------------*/
