#include <iostream>
using namespace std;
main()
{
int num[100];
int trans,n;
cout<<"Enter the number of integers: ";
cin>>n;
cout<<"Enter the number of transformation: ";
cin>>trans;
for(int i=0; i<n; i++)
{
   cout<<"Enter the number: ";
   cin>>num[i];

}

for(int i=0; i<n;i++)
{
if(num[i]%2==0)
{
    for(int j=0; j<trans; j++)
    {
        num[i]=num[i]-2;
    }
    cout<<num[i]<<"\t";
}
 
 if(num[i]%2!=0)
 {
    for(int m=0;m<trans;m++)
    {
        num[i]=num[i]+2;
    }
    cout<<num[i]<<"\t";
 }
    
}

}