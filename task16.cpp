#include<iostream>
using namespace std;
main()
{
    int n,sum=0;
    cout<<"Enter the number of resistors: ";
    cin>>n;
    int resistor[n];
   for(int i=0; i<n; i++)
   {
    cout<<"Enter Resistance of resistot "<<i+1 <<"  ";
    cin>>resistor[i];
     sum=sum+resistor[i];
   }
   cout<<"The total resistance is: "<<sum<<" ohms";
}
