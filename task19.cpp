#include<iostream>
using namespace std;
main()
{
    string sentence;
    cout<<"Enter the string: ";
    getline(cin,sentence);
    int count=sentence.length();
    for(int i=0; i<count;i++)
    {
        if(sentence[i]!='a'&&sentence[i]!='e'&&sentence[i]!='i'&&sentence[i]!='o'&&sentence[i]!='u')
     {
         cout<<sentence[i];
     }
     else
     {
        continue;
     }
    }
}