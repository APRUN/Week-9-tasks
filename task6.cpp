#include<iostream>
using namespace std;
main()
{
    int n,smallest,used;
    bool chota=false;
    cout<<"Enter the number of integers: ";
    cin>>n;
    float num[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the number: ";
        cin>>num[i];
    }
   smallest=num[0];
    for(int j=0; j<n; j++)
    {
       if(smallest<num[j+1])
       {
        used=smallest;
        chota=true;
        break;
       }

    }
       if(chota==true)
       {
        cout<<"Yes the smallest number is: "<<used;
       }
}