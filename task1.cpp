#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    float cgpa[size]; // it should be after assiging the value to size

    for (int idx = 0; idx < size; idx++) // for assigning values
    {
        cout << "Enter CGPA " << idx + 1 << ": ";
        cin >> cgpa[idx];
    }

    for (int idx = 0; idx < size; idx++) // for printing value of every index
    {
        cout  << cgpa[idx] << " ";
    }
}