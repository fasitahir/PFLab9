#include <iostream>
using namespace std;

//Take n numbers as input from user and multiplye them with number and display reverse order 

main()
{
    int size, number;

    cout << "Enter size: ";
    cin >> size;

    cout << "Enter number you want to multiplye: ";
    cin >> number;

    float num[size];

    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter Number: ";
        cin >> num[idx];
    }

    for (int idx = size - 1; idx >= 0; idx--)
    {
        cout << num[idx] * number << " ";
    }
}