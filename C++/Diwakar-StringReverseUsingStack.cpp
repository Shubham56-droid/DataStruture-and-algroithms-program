#include<iostream>
#include<vector>

//my stack implementation
class Stack{
private:
    std::vector<char> stack;
public:
    //constructor
    Stack(std::string input){
        for(auto i:input){
            push(i);
        }
    }

    //push elements into stack i.e vector list named stack
    void push(char c){
        stack.push_back(c);
    }

    //pop elements out of stack and this method returns the popped element
    char pop(){
        char temp=stack[stack.size()-1];
        stack.pop_back();
        return temp;
    }

    //helper method to know size of the stack
    int size(){
        return stack.size();
    }

    //Returns reversed String
    std::string reverseStack(){
        std::string reverseStr;

        int count = size();
        
        for(int i=0;i<count;i++){
            reverseStr+=pop();
        } 
        return reverseStr;
    }
};

int main(){
    //taking input into a string variable
    std::string input;
    std::cout<<"Enter a string\n";
    std::cin>>input;

    //creates a new stack
    Stack stack {input};
    std::cout<<"Reversed String is: ";
    //calling stack reverse method which returns a string of reversed input
    std::cout<<(stack.reverseStack());
    
    return 0;
}
