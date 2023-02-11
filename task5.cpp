#include<iostream>
using namespace std;
main()
{
    int size;
    string num[4];
    for(int j=0; j<4; j++)
    {
        cout<<"Enter the string: ";
        cin>>num[j];
    }

    if(num[0]==num[1]&& num[1]==num[2]&& num[2]==num[3]&&num[0].length()==num[1].length()&&num[1].length()==num[2].length()&&num[2].length()==num[3].length())
    {
        cout<<"Yes";
    }
    else
    {
cout<<"No";
    }
 
}