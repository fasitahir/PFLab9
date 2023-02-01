#include <iostream>
using namespace std;

main()
{
    int size;
    int number;
    bool found = false;
    cout << "Enter size: ";
    cin >> size;
    float isPresent[size];


    cout << "Enter number you want to search: ";
    cin >> number;

    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter number: ";
        cin >> isPresent[idx];
    }

    for (int idx = 0; idx < size; idx++)
    {
        if (isPresent[idx] == number)
        {
            found = true;
        }

    }

    if(found = true)
    {
        cout << "Found";
    }

    else 
    {
        cout << "Not found";
    }
}