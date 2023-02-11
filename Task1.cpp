#include<iostream>
using namespace std;
main()
{
string fruitname[4]={"peach","apple","guava","watermelon"};
string fruit;
int price[4]={60,70,40,30};
int quantity=0;
int amount=0;
  cout<<"Enter fruit name: ";
  cin>>fruit;
  cout<<"Enter the quantity: ";
  cin>>quantity;
  for(int idx=0; idx<4; idx++)
  {
  if(fruit==fruitname[idx])
  {
    amount=(quantity*price[idx]);
  }
  }
  cout<<amount;


}