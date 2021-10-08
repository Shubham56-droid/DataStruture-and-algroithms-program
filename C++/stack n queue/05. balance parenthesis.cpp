/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define max 100

struct Stack{
    int top;
    char arr[max];
    Stack()
    {
    	top=-1;
	}
} st;

bool isEmpty(){
    if(st.top == -1){
        return true;
    }else{
        return false;
    }
}

bool isFull(){
    if(st.top == max-1){
        return true;
    }else{
        return false;
    }
}

void push(char item){
    if(isFull()){
            printf("Stack is full");
    }else{
        //st.top++;
        st.arr[++st.top] = item;
    }
}

char pop(){
    if(isEmpty()){
        printf("Stack is empty");
    }else{
    	
        st.top--;
    
    }
}

char gettop(){
    return st.arr[st.top];
}

bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}

int  main()
{
    char in_expr[max];
    int length=0,i,j;
    printf("Enter an expression to check:");
    gets(in_expr);

    length = strlen(in_expr);

    for(i=0;i<length;i++){
        if(in_expr[i] == '(' || in_expr[i] == '{' || in_expr[i] == '['){
                push(in_expr[i]);
        }else if(in_expr[i] == ')' || in_expr[i] == '}' || in_expr[i] == ']'){
            char a = gettop();
        //    printf("%c",a);
            if(isEmpty() || !ArePair(gettop(),in_expr[i])){
                printf("\nResult - Invalid expression - Not a Balanced one !");
                return 0;
            }else{
                pop();
            }
        }
    }
    if(isEmpty()){
        printf("\nResult - Valid expression - Perfectly Balanced !");
    }else{
        printf("\nResult - Invalid expression - Not a Balanced one !");
    }
}

