#include <iostream>
using namespace std;
main()
{
    int n;
    float search;
    bool result = "False";
    cout << "Enter number of intergers: ";
    cin >> n;
    float num[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number: ";
        cin >> num[i];
    }
    cout << "Enter the number to search: ";
    cin >> search;
    for (int j = 0; j < n; j++)
    {
        if (num[j] == search)
        {
            result = true;
            break;
        }
    }
    if (result == true)
    {
        cout << "Yes number is present";
    }
    else{
        cout<<"Not found.";
    }
}