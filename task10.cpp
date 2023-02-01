#include <iostream>
using namespace std;

// even or odd length
main()
{
    string word;
    int count = 0;
    getline(cin, word);

    count = word.length();

    if (count % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "Odd";
    }
}