#include<iostream>
using namespace std;
main()
{
  string name;
  int length=0;
  cout<<"Enter the string: ";
  getline(cin,name);
  for(int i=0; name[i]!='\0'; i++)
  {
    length++;
  }
  cout<<length;
}