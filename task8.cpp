#include<iostream>
using namespace std;
main()
{
    int cnum,colour=0,diff=-1,sum=0;
    cout<<"Enter the number of colours you entering: ";
    cin>>cnum;
    string array[cnum];
    for(int i=0;i<cnum; i++)
    {
        cout<<"Enter the colour: ";
        cin>>array[i];
    }
    int count=sizeof(array)/sizeof(array[0]);
     for(int j=0; j<count; j++)
     {
        colour=colour+2;
        diff=diff+1;
     }
     sum=colour+diff;
     cout<<"The total time is "<<sum;
}