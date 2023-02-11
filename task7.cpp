#include <iostream>
#include <iostream>
using namespace std;
main()
{
    int n, largest, used;
    cout << "Enter the number of integers: ";
    cin >> n;
    float num[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number: ";
        cin >> num[i];
    }
    largest = num[0];
    for (int j = 0; j <n; j++)
    {
        if (largest > num[j])
        {
            used = largest;
        cout << "Yes the larest number is: " << used;
        break;
           
        }
        else
        {
            continue;
        }
        cout<<"Ok bye";
    }
}