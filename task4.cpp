#include <iostream>
using namespace std;
// reversing the n digits entered by user
main()
{
    int size;

    cout << "Enter size of array: ";
    cin >> size;

    int num[size];

    for(int idx = 0 ; idx < size ; idx++)
    {
        cout << "Enter number: ";
        cin >> num[idx];
    }

    for(int idx = size - 1  ; idx >= 0 ; idx --  )
    {
        cout << num[idx] << " ";
    }


}