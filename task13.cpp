#include <iostream>
using namespace std;
main()
{
    string name;
    char search;
    cout<<"Enter the string: ";
    cin>>name;
    int count=name.length();
    cout<<"Enter the character to search: ";
    cin>>search;
    for(int i=0; i<count; i++ )
    {
    if(name[i]==search)
    {
        cout<<"Yes";
    }
    if(name[i]!=search)
    {
        cout<<"No";
    }
    }
}
