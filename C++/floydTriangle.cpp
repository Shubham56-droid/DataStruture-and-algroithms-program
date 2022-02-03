#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"enter the number of rows:\n";
    cin>>rows;
    int num = 1;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
        
    }
    

    return 0;
}
