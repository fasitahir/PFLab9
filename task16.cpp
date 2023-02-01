#include <iostream>
using namespace std;
//resistance calculator
main()
{
    int size;
    float totalResistance = 0 ;

    cout << "Enter total number of resistors: ";
    cin >> size;

    float resistors[size];

    for(int idx = 0 ; idx < size ; idx++)
    {
        cout << "Enter value of resistor "<<idx+1<<" is: ";
        cin >> resistors[idx];

        totalResistance = totalResistance + resistors[idx];
    }

    cout << "Total resistance is: " << totalResistance << " ohms";
}