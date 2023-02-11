#include<iostream>
using namespace std;  //reverse character print
main()
{
    string name;

    cout<<"Enter the string: ";
    getline(cin,name);
int number=name.length();
while(name[number]!=name[0])
    {
        cout<<name[number];
        number--;
    }
         cout<<name[0];
}