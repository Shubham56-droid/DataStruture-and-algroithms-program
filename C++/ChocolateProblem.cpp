/* -------------------------------------------------------------------------------------------------------------------
Chocolate problem given money , price of each chocolate and number of warpper in exchange with we can get new chocolate4
example =
input :
money = 15;
price (of each chocolate)  = 1; (Rs)
wrap = 3;
(means instead of 3 wrapper we will get 1 more chocolate)

output:
22
 -------------------------------------------------------------------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;


int countNewChoco(int choco,int wrap)
{
  if(choco < wrap)
  {
    return 0;
  }
  int newChoco = choco / wrap;
  return newChoco + countNewChoco(newChoco + choco%wrap , wrap);
}


int countMaxChoco(int money,int price,int wrap)
{
  int choco = money / price;
  return choco + countNewChoco(choco,wrap);
}
int main()
{
  int money = 15;
  int price = 1;
  int wrap = 3;
  
  cout<<"Maximum chocolate is : "<<countMaxChoco(money,price,wrap)<<endl;
}
