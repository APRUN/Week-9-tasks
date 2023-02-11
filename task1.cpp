#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter size of array";
    cin>>size;
    float cgpa[size];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter CGPA: ";
        cin>>cgpa[i];
    }
    for(int i=0; i<size; i++)
    {
        cout<<"The CGPA of student "<<i+1  <<" is: "<<cgpa[i]<<"    ";

    }


}