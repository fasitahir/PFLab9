//largest number entered by the user

#include <iostream>
using namespace std;

main()
{
    int size ;
    
    cout << "Enter the size of array: ";
    cin >> size;

    float num[size];

    float largest = num[size-1]; 

    for(int idx = 0 ; idx < size ; idx ++)
    {
        cout << "Enter number: ";
        cin >> num[idx];

        if(largest < num[idx])
        {
            largest = num[idx];
        }
    }

    cout << "Largest number is: " << largest ;
} 