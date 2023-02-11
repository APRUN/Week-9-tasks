#include<iostream>
using namespace std;
main()
{
    int n;
    float avg=0,sum=0;
    cout<<"Enter the total numbers of number: ";
    cin>>n;
    float number[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the number: ";
        cin>>number[i];
        sum=number[i]+sum;
    }

    avg=sum/n;
    cout<<"The sum is: "<<sum<<endl;
    cout<<avg;
}
