#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter the string: ";
    cin>>name;
    
    if(name.length()%2==0)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}