#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter number of integers:";
    cin>>n;
    float num[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the number: ";
        cin>>num[i];
    }
    for(int j=n-1; j>=0; j--)
    {
        cout<<num[j]<<endl;
    }
    
}