#include<iostream>
using namespace std;
main()
{
    int n,product;
    cout<<"Enter the number of integers: ";
    cin>>n;
    float num[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the number: ";
        cin>>num[i];
    }
    cout<<"Enter the product number: ";
    cin>>product;
    for(int j=n; j>=0; j--)
    {
        cout<<"The product is: "<<product*num[j]<<endl;
    }
}