#include <iostream>
using namespace std;

/*Given a total due and an array representing the amount of change in your pocket,
determine whether or not you are able to pay for the item. The change will always be
represented in the following order: quarters, dimes, nickels, and pennies.
[25, 20, 5, 0], 4.25 should yield true, since having 25 quarters, 20 dimes, 5 nickels, and 0
pennies give you 6.25 + 2 + .25 + 0 = 8.50.
NOTE:
● quarter: 25 cents / $0.25
● dime: 10 cents / $0.10
● nickel: 5 cents / $0.05
● penny: 1 cent / $0.01
Test Cases:
[2, 100, 0, 0], 14.11 ➞ false
[0, 0, 20, 5], 0.75 ➞ true
[30, 40, 20, 5], 12.55 ➞ true
[10, 0, 0, 50], 3.85 ➞ false
[1, 0, 5, 219], 19.99 ➞ false*/

main()
{
    float required, available;
    float money[4];


    for (int idx = 0; idx < 4; idx++)
    {
        cout << "Enter change(1st for quater , 2nd for dime , 3rd for nickel , 4th for penny): ";
        cin >> money[idx];
    }

    cout << "Enter money you require: ";
    cin >> required;
    
    available = money[0] * 0.25 + money[1] * 0.10 + money[2] * 0.05 + money[1] * 0.01;
    if (available > required)
    {
        cout << "true";
    }

    else
    {
        cout << "false";
    }
}