#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter the name: ";
    getline(cin,name);


    for(int i=0; name[i]!='\0'; i++)
    {
    cout<<"The character at Index "<<i <<" is "<<name[i]<<endl;
    }
}