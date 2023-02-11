#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter number of elemets of array 2: ";
    cin>>n;
    int array1[2];
    int array2[n];
    for(int i=0; i<2; i++)
    {
        cout<<"Enter number for 1st array: ";
        cin>>array1[i];
    }
    for(int j=0; j<n; j++)
    {
        cout<<"Enter elements for array 2: ";
        cin>>array2[j];
    }
    cout<<array1[0]<<" ";
    for(int m=0; m<n; m++)
    {
    cout<<array2[m]<<" ";
    }
    cout<<array1[1]<<" ";
}