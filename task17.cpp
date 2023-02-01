#include <iostream>
using namespace std;
/* Create a program that takes two arrays and inserts the second array in the middle of the
 first array. The first array always has two elements.*/

main()
{
    int size;

    cout << "Enter size of 2nd array: ";
    cin >> size;

    float arr1[2];
    float arr2[size];

    cout << "Enter Number 1 for array 1: ";
    cin >> arr1[0];

    cout << "Enter Number 2 for array 1: ";
    cin >> arr1[1];

    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter Number " << idx + 1 << " for array 2: ";
        cin >> arr2[idx];
    }

    cout << arr1[0] << " ";

    for (int idx = 0; idx < size; idx++)
    {
        cout << arr2[idx] << " ";
    }

    cout << arr1[1];
}