#include <iostream>
#include <math.h>

using namespace std;

int main()

{

    int n,num,rem,i=0;
    int sum=0;
    float result=0;

    cout<<"Enter the number:"<<endl;
    cin>>n;
    num=n;

    /*for(num=n;num!=0;++i)        //store the number of digits of n in num
    {
        
        num/=10;

    }
    for(num=n;num!=0;num/=10)
    {

        rem=num%10;

        result+=pow(rem,i);    //store the sum of power of each digits in result    

    }*/
    
    while(num>0)                    //Stores sum of cubes of digits
    {
        int t=(num%10)*(num%10)*(num%10);
        sum+=t;
        num/=10;
    }
    //if((int)result==n)
    if(sum==n)
    {
        cout<<"Yes, it is an Armstrong Number";
    }
    else
    {
        cout<<"No, it is not an Armstrong Number";
    }
    return 0;


}
