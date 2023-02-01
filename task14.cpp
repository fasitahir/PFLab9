#include <iostream>
using namespace std;

main()
{
    int size, number;
    bool check = false;

    cout << "Enter size of the array: ";
    cin >> size;

    cout << "Enter a number: ";
    cin >> number;

    float num[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Number in array: ";
        cin >> num[i];

        if (num[i] == number)
        {
            check = true;
            break;
        }
    }
    if (check == true)
    {
        cout << "Already entered";
    }
}