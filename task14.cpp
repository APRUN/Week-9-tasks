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
    if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
    {
    length++;
    }
  }
  cout<<length;
  
}