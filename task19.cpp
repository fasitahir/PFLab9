#include <iostream>
using namespace std;
/*Write a program that prints the string "something" joined with a space " " and the given
argument a.*/

main()
{
    string arguement;
    getline(cin , arguement);

    cout << "something" << " " << arguement;
}