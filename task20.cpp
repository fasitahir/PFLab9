#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
// Create a program that takes a string and returns a new string with all vowels removed.

main()
{
    string arguement;

    getline(cin, arguement);



    for (int i = 0; arguement[i] != '\0'; i++)
    {
        if (arguement[i] == 'a' || arguement[i] == 'e' || arguement[i] == 'i' || arguement[i] == 'o' || arguement[i] == 'u'
        ||arguement[i] == 'A' || arguement[i] == 'E' || arguement[i] == 'I' || arguement[i] == 'O' || arguement[i] == 'U')
        {
            arguement[i] = '\0';
        }
    }

    cout << arguement;
}