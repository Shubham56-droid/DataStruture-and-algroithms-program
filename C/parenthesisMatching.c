#include<stdio.h>
#include<stdlib.h>
struct Stack
{
  int top;
  int size;
  char *arr;
};

int isEmpty(struct Stack *sp)
{
    if(sp->top <= -1)
    {
      return 1;
    }
    else
    {
      return 0;
    }
}

int isFull(struct Stack *sp)
{
    if(sp->top >= sp->size)
    {
      return 1;
    }
    else
    {
      return 0;
    }
}

void push(struct Stack *sp,char val)
{
  if(isFull(sp))
  {
    printf("Stack overflow\n");
  }
  else
  {
    sp->top = sp->top + 1;
    sp->arr[sp->top] = val;
  }
}

void pop(struct Stack*sp)
{
  if(isEmpty(sp))
  {
    printf("Stack Underflow\n");
  }
  else
  {
    sp->top = sp->top - 1;
  }
}

int parenthesisMatch( char *exp)
{
  struct Stack *sp;
  sp->size = 100;
  sp->top = -1;
  sp->arr = (char*)malloc(sizeof(char));

  for (int i = 0; exp[i]!='\0'; i++)
  {
    if(exp[i]=='(')
    {
      push(sp,'(');
    }
    else if( exp[i]==')')
    {
      if(isEmpty(sp))
      {
        return 0;
      }
      pop(sp);
    }
  }

  if(isEmpty(sp))
  {
    return 1;
  }
  else
  {
    return 0;
  }
  
}

int main()
{
  char *exp = "8*(9)*(7866(99---))";
  if (parenthesisMatch(exp))
  {
    printf("The parenthesis is matching\n");
  }
  else
  {
    printf("The parenthesis is not matching\n");
  }
  
  return 0;
}
