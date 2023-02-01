#include <iostream>
using namespace std;
//smallest number from the array

main()
{
    int size;
    bool check = false;

    cout << "Enter Size of array: ";
    cin >> size;

    int num[size];

    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter number: ";
        cin >> num[idx];
    }
    int smallest = num [0];

    for (int idx = 0; idx < size; idx++)
    {
        if (num[idx] < smallest)
        {
            smallest =  num[idx];
            
        }
        
    }

    cout << smallest;
}