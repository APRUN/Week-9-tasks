#include<iostream>
using namespace std;
main()
{
    int count;
    cout<<"Enter the number of integers: ";
    cin>>count;
   int num[count];
   for(int i=0; i<count; i++)
   {
    cout<<"Enter number: ";
    cin>>num[i];
   }
   for(int j=0; j<count; j++)
   {
    if((num[j]-7)%10==0)
    {
        cout<<"Boom!";
    }

   }




}