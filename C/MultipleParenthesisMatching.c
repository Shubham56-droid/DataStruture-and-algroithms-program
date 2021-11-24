#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int size;
    char *arr;
};
int isEmpty(struct stack*sp)
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

int isFull(struct stack*sp)
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

void push(struct stack *sp,char val)
{
    if(isFull(sp))
    {
        printf("stack overflow\n");
    }
    else
    {
        sp->top = sp->top + 1;
        sp->arr[sp->top] = val;
    }
}

char pop(struct stack *sp)
{
    if(isEmpty(sp))
    {
        printf("stack underflow\n");
    }
    else
    {
        char val = sp->arr[sp->top];
        sp->top = sp->top - 1;
        return val;
    }
}

char stackTop(struct stack *sp)
{
    return sp->arr[sp->top];
}

int match(char a,char b)
{
    if(a=='{' && b=='}')
    {
        return 1;
    }
    if(a=='[' && b==']')
    {
        return 1;
    }
    if(a=='(' && b==')')
    {
        return 1;
    }
    return 0;
}

int multipleParenthesisMatching(char *exp)
{
    struct stack *sp;
    sp->top = -1;
    sp->size = 100;
    sp->arr = (char*)malloc(sizeof(char));
    char pop_ch;
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if( exp[i]=='{' || exp[i]=='[' || exp[i]=='(')
        {
            push(sp,exp[i]);
        }
        else if(exp[i]=='}' || exp[i]==')' || exp[i]==']')
        {
            if(isEmpty(sp))
            {
                return 0;
            }
            pop_ch = pop(sp);
            if(!match(pop_ch,exp[i]))
            {
                return 0;
            }
            
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
    char *exp = "6(55{54453}345gdf)}}";
    if(multipleParenthesisMatching(exp))
    {
        printf("the parentesis is matching....\n");
    }
    else
    {
        printf("the parentesis is not matching....\n");
    }
    return 0;
}
