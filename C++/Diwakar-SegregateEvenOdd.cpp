#include<iostream>
#include<vector>

int main(){

    std::vector<int> even;
    std::vector<int> odd;

    int count=0;
    std::cout<<"How many numbers you want to enter? \n";
    std::cin>>count;
    std::cout<<"Enter above number of numbers and press enter\n";
    int temp=0;
    while(count>0){
        std::cin>>temp;
        if(temp%2==0){
            even.push_back(temp);
        }
        if(temp%2!=0){
            odd.push_back(temp);
        }
        count--;
    } 
 
    //prints even values
    std::cout<<"The Segregated Even Odd Numbers are:\n";
    for(auto i:even){
        std::cout<<i<<" ";
    }
    //prints odd values
    for(auto i:odd){
        std::cout<<i<<" ";
    }
    return 0;
}
