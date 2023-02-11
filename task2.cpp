#include<iostream>
using namespace std;
main()
{
    
    string movie[5]={"gladiator", "starwars","terminator","takinglives","tombrider"};
    string moviename;
    float amount;
    cout<<"Enter the movie name: ";
    cin>>moviename;
    for(int i=0; i<5; i++ )
    {
     if(moviename==movie[i]&&i%2!=0)
     {
        amount=500*0.95; 
     }
     if(moviename==movie[i]&&i%2==0)
     {
        amount=500*0.90;
     }
    }

cout<<amount;
}