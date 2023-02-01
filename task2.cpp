#include  <iostream>
using namespace std;

main()
{
    float sum = 0 , average = 0; 
    int size;

    cout << "Enter number of numbers: ";
    cin >> size;

    float avg[size];

    for(int idx = 0 ; idx < size ; idx++)
    {
        cout << "Enter Number " << idx+1  << ": ";
        cin >> avg[idx];

        sum = sum + avg[idx];
    }

    cout << "The sum of numbers is: "<< sum << endl;

    average = sum / size;

    cout << "The average of numbers is: " << average << endl;

    
}