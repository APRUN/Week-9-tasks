#include <iostream>
using namespace std;
main()
{
    int result;
    string moves[10] = {"shimmy", "shake", "pirouette", "slide", "boxstep", "headspin", "dosado", "pop", "lock", "arabesque"};
    int number[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the number: ";
        cin >> number[i];
    }
    for (int i = 0; i < 4; i++)
    {
        result = number[i] + i;
        cout << moves[result]<<"\t";
    }
}