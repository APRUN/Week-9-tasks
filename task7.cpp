#include <iostream>
using namespace std;
main()
{
    string name1, name2;
    int count = 0;
    char result;
    cout << "Enter the string: ";
    cin >> name1;
    cout << "Enter the string: ";
    cin >> name2;
    for (int j = 0; j < name2.length(); j++)
    {
        for (int i = 0; i < name1.length(); i++)
        {
            if (name2[j] == name1[i])
            {
                count++;
                 
                 break;
            }
        }
    }
    cout << "There are " << count << "Digits repeating";
}